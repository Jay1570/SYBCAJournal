#include<iostream.h>
#include<conio.h>
class bank
{
	protected:
		char name[20],type[10];
		float amount;
	public:
		int acno;
		void getdata()
		{
			cout<<"\n\nEnter Name :- ";
			cin>>name;
			cout<<"Enter Account Number :- ";
			cin>>acno;
			cout<<"Enter Type Of Account :- ";
			cin>>type;
			cout<<"Enter Deposited Amount To Open Account :-";
			cin>>amount;
			cout<<"Your Account Opened Successfully..."<<endl;
		}
		void deposit()
		{
			float d;
			cout<<"\n\nEnter Amount to Deposit :- ";
			cin>>d;
			amount+=d;
			cout<<"Amount Successfully Deposited To your Account..."<<endl;
		}
		void withdraw()
		{
			float w;
			cout<<"\n\nEnter Amount To Withdraw :- ";
			cin>>w;
			if(w>amount)
			{
				cout<<"You have insufficient Balance..."<<endl;
				return;
			}
			amount-=w;
			cout<<"Amount Successfully Withdrawn..."<<endl;
		}
		void display()
		{
			cout<<"\n\nName :- "<<name<<endl;
			cout<<"Balance :- "<<amount<<endl;
		}
};
void main()
{
	int ch,i,acc,j=0,choice;
	bank b[5];
	clrscr();
	do
	{
		cout<<"\n1.New Account\n2.Existing Account\n3.Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				b[j].getdata();
				j++;
				break;
			case 2:
				cout<<"\nEnter Account Number :- ";
				cin>>acc;
				for(i=0;i<j;i++)
				{
					if(b[i].acno==acc)
					{
					   do
					   {
						cout<<"\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit\n";
						cin>>choice;
						switch(choice)
						{
							case 1:
								b[i].deposit();
								break;
							case 2:
								b[i].withdraw();
								break;
							case 3:
								b[i].display();
								break;
							case 4:
								cout<<"Exitting..."<<endl;
								break;
							default:
								cout<<"Enter Corrct Choice...";
						}
					   }while(choice!=4);
					   break;
					}
				}
				if(i==j)
					cout<<"Account Not Found..."<<endl;
				break;
			case 3:
				cout<<"Exitting..."<<endl;
				break;
			default:
				cout<<"Enter Correct Choice...";
		}
	}while(ch!=3);
}