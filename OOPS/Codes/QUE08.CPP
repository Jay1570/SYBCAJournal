#include<iostream.h>
#include<conio.h>
#include<string.h>
class Telephone
{
	protected:
		char name[20][20];
		long int tno[20];
		int i,j;
	public:
		Telephonr()
		{
			i=0;
		}
		void add()
		{
			cout<<"Enter Name :- ";
			cin>>name[i];
			cout<<"Enter Telephone Number :- ";
			cin>>tno[i];
			i++;
		}
		void show(char nm[20])
		{
			for(j=0;j<i;j++)
			{
				if(strcmp(nm,name[j])==0)
				{
					cout<<"Telephone Number :- "<<tno[j]<<endl;
					break;
				}
			}
			if(j==i)
				cout<<"Name Not Found..."<<endl;
		}
};
void main()
{
	int ch;
	char nm[20];
	Telephone t;
	clrscr();
	do
	{
		cout<<"\n1.Add\n2.Show\nEnter Choice :- ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				t.add();
				break;
			case 2:
				cout<<"Enter Name To Search Number :- ";
				cin>>nm;
				t.show(nm);
				break;
			case 3:
				break;
			default:
				cout<<"Enter Correct Choice...";
		}
	}while(ch!=3);
	getch();
}