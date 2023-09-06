import sqlite3
def insert():
    db=sqlite3.connect('student.db')
    cur=db.cursor()
    rollno=int(input("Enter RollNo :- "))
    name=input("Enter Name :- ")
    sub1=int(input("Enter Marks1 :- "))
    sub2=int(input("Enter Marks2 :- "))
    sub3=int(input("Enter Marks3 :- "))
    total=sub1+sub2+sub3
    cur.execute("insert into student values(?,?,?,?,?,?)",(rollno,name,sub1,sub2,sub3,total))
    db.commit()
    cur.close()
    db.close()

def update():
    db=sqlite3.connect('student.db')
    cur=db.cursor()
    up=int(input("Enter RollNo To Update :- "))
    name=input("Enter New Name :- ")
    sub1=int(input("Enter New Marks1 :- "))
    sub2=int(input("Enter New Marks2 :- "))
    sub3=int(input("Enter New Marks3 :- "))
    total=sub1+sub2+sub3
    cur.execute("update student set name=?,sub1=?,sub2=?,sub3=?,total=? where rollno=?",(name,sub1,sub2,sub3,total,up))
    db.commit()
    cur.close()
    db.close()

def delete():
    db=sqlite3.connect('student.db')
    cur=db.cursor()
    d=input("Enter RollNo To Delete :- ")
    cur.execute("delete from student where rollno=?",(d))
    db.commit()
    cur.close()
    db.close()

def fetch():
    db=sqlite3.connect('student.db')
    cur=db.cursor()
    cur.execute("select * from student where total=(select max(total)from student)")
    d=cur.fetchone()
    print(d)
    db.commit()
    cur.close()
    db.close()

def main():
    ch=0
    while ch!=5:
        ch=int(input("\n1.Insert\n2.Update\n3.Delete\n4.Highest Marks\n5.Exit\nEnter Choice:- "))
        if(ch==1):
            insert()
        elif(ch==2):
            update()
        elif(ch==3):
            delete()
        elif(ch==4):
            fetch()
    
if __name__=="__main__":
    main()