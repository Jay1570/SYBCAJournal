#include<iostream.h>
#include<conio.h>
class Person
{
	protected:
		char name[20];
		int age;
	public:
		void getdata()
		{
			cout<<"Enter Name :- ";
			cin>>name;
			cout<<"Enter Age :- ";
			cin>>age;
		}
		void display()
		{
			cout<<"Name :- "<<name<<endl;
			cout<<"Age :- "<<age<<endl;
		}
};
class Student:public Person
{
	protected:
		float per;
	public:
		void getstu()
		{
			getdata();
			cout<<"Enter Percentage :- ";
			cin>>per;
		}
		void disstu()
		{
			display();
			cout<<"Percentage :- "<<per<<endl;
		}
};
class Teacher:public Person
{
	protected:
		float salary;
	public:
		void gettea()
		{
			getdata();
			cout<<"Enter Salary :- ";
			cin>>salary;
		}
		void distea()
		{
			display();
			cout<<"Salary :- "<<salary<<endl;
		}
};
void main()
{
		int ch,i,sn,tn;
		Student s[10];
		Teacher t[10];
		do
		{
			cout<<"\n1.Enter Student Details\n2.Display Student\n3.Enter Teacher Details\n4.Display Teacher Details\n5.Exit";
			cin>>ch;
			switch(ch)
			{
				case 1:
					cout<<"Enter Number Of Students :- ";
					cin>>sn;
					for(i=0;i<sn;i++)
					{
						cout<<"Enter Details Of Student "<<i+1<<" :-\n\n";
						s[i].getstu();
					}
					break;
				case 2:
					for(i=0;i<sn;i++)
					{
						cout<<"Details Of Student "<<i+1<<" :-\n\n";
						s[i].disstu();
					}
					break;
				case 3:
					cout<<"Enter Number Of Teachers :- ";
					cin>>tn;
					for(i=0;i<tn;i++)
					{
						cout<<"Enter Details Of Teacher "<<i+1<<" :-\n\n";
						t[i].gettea();
					}
					break;
				case 4:
					for(i=0;i<tn;i++)
					{
						cout<<"Details Of Teacher "<<i+1<<" :-\n\n";
						t[i].distea();
					}
					break;
			}
		}while(ch!=5);
}