#include<iostream.h>
#include<conio.h>
class Time12
{
	protected:
		int h,m,s;
		char mer[2];
	public:
		void gettime()
		{
			cout<<"Enter Hour :- ";
			cin>>h;
			cout<<"Enter Minute :- ";
			cin>>m;
			cout<<"Enter Second :- ";
			cin>>s;
			cout<<"Enter Meridian(AM/PM) :- ";
			cin>>mer;
		}
		void display()
		{
			gettime();
			cout<<"Time :-\n";
			cout<<h<<":"<<m<<":"<<s<<" "<< mer;
		}
};
class Time24
{
	protected:
		int h,m,s;
	public:
		void gettime()
		{
			cout<<"Enter Hour :- ";
			cin>>h;
			cout<<"Enter Minute :- ";
			cin>>m;
			cout<<"Enter Second :- ";
			cin>>s;
		}
		void display()
		{
			gettime();
			cout<<"Time :-\n";
			cout<<h<<":"<<m<<":"<<s;
		}
};
void main()
{
	Time12 t1;
	Time24 t2;
	clrscr();
	t1.display();
	t2.display();
	getch();
}