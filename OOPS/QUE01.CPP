#include<iostream.h>
#include<conio.h>
const int minimum=50;
void main()
{
	float total,unit,additional=0;
	char name[20];
	clrscr();
	cout<<"Enter Name :- ";
	cin>>name;
	cout<<"Enter Unit :- ";
	cin>>unit;
	if(unit<=100)
		total=(unit*0.6)+minimum;
	else if(unit<=300)
		total=(unit*0.6)+((unit-100)*0.8)+minimum;
	else
		total=(unit*0.6)+((unit-100)*0.8)+((unit-300)*0.9)+minimum;
	if(total>300)
	{
		additional=total*0.15;
		total+=additional;
	}
	cout<<"Name :- "<<name<<endl;
	cout<<"Units Consumed :- "<<unit<<endl;
	cout<<"Additional Charges :- "<<additional<<endl;
	cout<<"Minimum Charges :- "<<minimum<<endl;
	cout<<"Total :- "<<total;
	getch();
}