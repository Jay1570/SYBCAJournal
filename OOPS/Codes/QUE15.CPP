#include<iostream.h>
#include<conio.h>
const int n=5;
int dq[n],f=-1,r=-1;
class Queue
{
	public:
		void insert_front(int data)
		{
			if(f==0)
			{
				cout<<"Dequeue is Overflow"<<endl;
				return;
			}
			if(f==-1)
				f=r=n-1;
			else
				f--;
			dq[f]=data;
		}
		void insert_rear(int data)
		{
			if(r==n-1)
			{
				cout<<"Dequeue is Overflow"<<endl;
				return;
			}
			r++;
			dq[r]=data;
			if(f==-1)
				f++;
		}
		int delete_front()
		{
			if(f==-1)
			{
				cout<<"Dequeue is Underflow"<<endl;
				return 0;
			}
			int data=dq[f];
			dq[f]=0;
			if(f==r)
				f=r=-1;
			else
				f++;
			return data;
		}
		int delete_rear()
		{
			if(r==-1)
			{
				cout<<"Dequeue is Underflow"<<endl;
				return 0;
			}
			int data=dq[r];
			dq[r]=0;
			if(f==r)
				f=r=-1;
			else
				r--;
			return data;
		}
		void display()
		{
			int i;
			if(f==-1)
			{
				cout<<"Dequeue is Underflow..."<<endl;
				return;
			}
			for(i=0;i<n;i++)
				cout<<dq[i]<<"\t";
		}
};
void main()
{
	int ch,data;
	char rside,side;
	Queue q1;
	clrscr();
	cout<<"\nEnter Restricted Side(L/R) :- ";
	cin>>rside;
	do
	{
		cout<<"\n\n1.Insert\n2.Delete\n3.Display\n4.Exit\nEnter Choice :- ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter Value :- ";
				cin>>data;
				if(rside=='L')
					q1.insert_rear(data);
				else
					q1.insert_front(data);
				break;
			case 2:
				int del;
				cout<<"Enter Side To Delete Data(L/R) :- ";
				cin>>side;
				if(side=='L')
					del=q1.delete_front();
				else
					del=q1.delete_rear();
				if(del!=0)
					cout<<"Deleted Value :- "<<del<<endl;
				break;
			case 3:
				q1.display();
				break;
			case 4:
				cout<<"Exitting...";
				break;
			default:
				cout<<"Enter Correct Choice...";
		}
	}while(ch!=4);
	getch();
}