#include<iostream.h>
#include<conio.h>
class Student
{
	protected:
		char name[20];
		int no,m1,m2,m3;
		float per;
	public:
		void getdata()
		{
			cout<<"Enter Roll No :- ";
			cin>>no;
			cout<<"Enter Name :- ";
			cin>>name;
			cout<<"Enter Marks1 :- ";
			cin>>m1;
			cout<<"Enter Marks2 :- ";
			cin>>m2;
			cout<<"Enter Marks3 :- ";
			cin>>m3;
		}
		void percentage()
		{
			getdata();
			per=(m1+m2+m3)/3.0;
			cout<<"Percentage :- "<<per;
		}
};
void main()
{
	Student s;
	clrscr();
	s.percentage();
	getch();
}