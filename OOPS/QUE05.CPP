/*Create a class called "Vehicle" which contains data members registration
number  and  fuel  type  Make  getdata()  function  to  input  data  value.  Create  class
"two-Wheeler" from vehicle which contains data member's distance and mileage
Make getdata() function to input data. Use overloading techniques for getdata()
function and display the information with fuel used.*/
#include<iostream.h>
#include<conio.h>
class Vehicle
{
	protected:
		char rn[20],ftype[10];
	public:
		virtual void getdata()
		{
			cout<<"Enter Registration Number :- ";
			cin>>rn;
			cout<<"Enter Fuel Type :- ";
			cin>>ftype;
		}
		virtual void display()
		{
			cout<<"\n\nRegistration Number :-  "<<rn<<endl;
			cout<<"Fuel Type :- "<<ftype<<endl;
		}
};
class Two_wheeler:public Vehicle
{
	protected:
		float distance,mileage;
	public:
		void getdata()
		{
			cout<<"Enter Distance Of Your Vehicle Travelled(km) :- ";
			cin>>distance;
			cout<<"Enter Mileage Of Your Vehicle(km/l) :- ";
			cin>>mileage;
		}
		void display()
		{
			cout<<"Distance Travelled :- "<<distance<<endl;
			cout<<"Mileage :- "<<mileage<<endl;
			cout<<"Fuel Used :- "<<distance*mileage<<endl;
		}
};
void main()
{
	Vehicle v;
	Two_wheeler t;
	Vehicle *v1=&v,*t1=&t;
	clrscr();
	v1->getdata();
	t1->getdata();
	v1->display();
	t1->display();
	getch();
}