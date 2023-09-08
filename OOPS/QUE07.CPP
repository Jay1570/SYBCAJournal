/*Create  two  classes  DM  and  DB  which  store  the  values  of  distance.  DM  stores
distance in meters and centimeters. DB stores distances in feet and inches. Write
a program that can read values for the class object and add one object of DM
with another object of DB. Use a friend function to carry out the addition
operation and this function will display answer in meter and centimeters.*/
#include<iostream.h>
#include<conio.h>
class DB;
class DM
{
	protected:
		int m,cm;
	public:
		DM()
		{
			cout<<"Enter Meter :- ";
			cin>>m;
			cout<<"Enter Centimeter :- ";
			cin>>cm;
		}
		friend void add(DM m,DB b);
};
class DB
{
	protected:
		int f,i;
	public:
		DB()
		{
			cout<<"Enter Feet :- ";
			cin>>f;
			cout<<"Enter Inches :- ";
			cin>>i;
		}
		friend void add(DM m,DB b);
};
void add(DM m,DB b)
{
	float m1,cm;
	cm=m.cm+(b.i*2.54)+(b.f*30.84);
	m1=m.m+(int)(cm/100);
	cm=(int)cm%100;
	cout<<"Meter :- "<<m1<<endl;
	cout<<"Centimeter :- "<<cm<<endl;
}
void main()
{
	clrscr();
	DM m;
	DB b;
	add(m,b);
	getch();
}