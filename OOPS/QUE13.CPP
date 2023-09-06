#include<iostream.h>
#include<conio.h>
const n=5;
int f=-1,r=-1,q[n];
class Queue
{
	  public:
		void enqueue(int data)
		{
			if(r==n-1)
			{
				cout<<"Queue is Overflow..."<<endl;
				return;
			}
			r++;
			q[r]=data;
			if(f==-1)
				f++;
		}
		int dequeue()
		{
			int data;
			if(f==-1)
			{
				cout<<"Queue is Underflow..."<<endl;
				return 0;
			}
			data=q[f];
			if(f==r)
				f=r=-1;
			else
				f++;
			return data;
		}
		void display()
		{
			int i;
			if(f==-1)
			{
				cout<<"Queue is Underflow..."<<endl;
				return;
			}
			for(i=f;i<=r;i++)
				cout<<q[i]<<"\t";
		}
};
void main()
{
	int ch,data;
	Queue q1;
	clrscr();
	do
	{
		cout<<"\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter Value :- ";
				cin>>data;
				q1.enqueue(data);
				break;
			case 2:
				cout<<"Removed Data :- "<<q1.dequeue()<<endl;
				break;
			case 3:
				q1.display();
				break;
			case 4:
				break;
			default:
				cout<<"Enter Correct Choice..."<<endl;
		}
	}while(ch!=4);
	getch();
}