#include<iostream.h>
#include<conio.h>
const int n=5;
int s[n],top=-1;
class Stack
{
	public:
	void push(int data)
	{
		if(top==n-1)
		{
			cout<<"Stack is Overflow..."<<endl;
			return;
		}
		top++;
		s[top]=data;
	}
	int pop()
	{
		if(top==-1)
		{
			cout<<"Stack is Underflow..."<<endl;
			return 0;
		}
		int data=s[top];
		top--;
		return data;
	}
	void peep()
	{
		int loc;
		cout<<"Enter Location From Top :- ";
		cin>>loc;
		if(top-loc+1<0)
		{
			cout<<"There is no value..."<<endl;
			return;
		}
		cout<<"Value at "<<loc<<" from Top :- "<<s[top-loc+1]<<endl;
	}
	void update()
	{
		int loc,data;
		cout<<"Enter Location From Top :- ";
		cin>>loc;
		if(top-loc+1<0)
		{
			cout<<"There is no value..."<<endl;
			return;
		}
		cout<<"Value at "<<loc<<" from Top :- "<<s[top-loc+1]<<endl;
		cout<<"Enter New Value :- ";
		cin>>data;
		s[top-loc+1]=data;
		cout<<"Value Updated..."<<endl;
	}
	void display()
	{
		int i;
		if(top==-1)
		{
			cout<<"Stack is Underflow..."<<endl;
			return;
		}
		for(i=top;i>=0;i--)
			cout<<s[top]<<endl;
	}
};
void main()
{
	int ch,data;
	Stack s1;
	clrscr();
	do
	{
		cout<<"1.Push\n2.Pop\n3.Peep\n4.Update\n5.Display\n6.Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter Value :- ";
				cin>>data;
				s1.push(data);
				break;
			case 2:
				cout<<"Removed Value :- "<<s1.pop()<<endl;
				break;
			case 3:
				s1.peep();
				break;
			case 4:
				s1.update();
				break;
			case 5:
				s1.display();
				break;
			case 6:
				break;
			default:
				cout<<"Enter Correct Choice..."<<endl;
		}
	}while(ch!=6);
	getch();
}