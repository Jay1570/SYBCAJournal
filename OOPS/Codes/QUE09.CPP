#include<iostream.h>
#include<conio.h>
class Shape
{
	protected:
		double w,h;
	public:
		virtual void getdata()=0;
		virtual void area()=0;
};
class Triangle:public Shape
{
	public:
		void getdata()
		{
			cout<<"Enter Values For Triangle :-\n";
			cout<<"Enter Height :- ";
			cin>>h;
			cout<<"Enter Width :- ";
			cin>>w;
		}
		void area()
		{
			cout<<"Area Of Triangle :- "<<(h*w)/2;
		}
};
class Rectangle:public Shape
{
	public:
		void getdata()
		{
			cout<<"\nEnter Values For Rectangle :-\n";
			cout<<"Enter Length :- ";
			cin>>h;
			cout<<"Enter Width :- ";
			cin>>w;
		}
		void area()
		{
			cout<<"Area Of Rectangle :- "<<h*w;
		}
};
void main()
{
	clrscr();
	Shape *t,*r;
	t=new Triangle();
	r=new Rectangle();
	t->getdata();
	t->area();
	r->getdata();
	r->area();
	getch();
}