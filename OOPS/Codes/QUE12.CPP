#include<iostream.h>
#include<conio.h>
#include<string.h>
const int n=20;
char s[n];
int top=-1;
class Stack
{
	public:
		void push(char data)
		{
			top++;
			s[top]=data;
		}
		char pop()
		{
			char data=s[top];
			top--;
			return data;
		}
		int priority(char op)
		{
			switch(op)
			{
				case '^':
					return 3;
				case '*':case '/':
					return 2;
				case '+':case '-':
					return 1;
				default:
					return 0;
			}
		}
};
void main()
{
	char in[n],pre[n];
	int i,j=0;
	Stack st;
	clrscr();
	cout<<"Enter Infix Expression :- ";
	cin>>in;
	strrev(in);
	for(i=0;in[i]!='\0';i++)
	{
		switch(in[i])
		{
			case ')':
				st.push(in[i]);
				break;
			case '^':case '*':case '/':case '+':case '-':
				while(st.priority(s[top])>=st.priority(in[i]))
					pre[j++]=st.pop();
				st.push(in[i]);
				break;
			case '(':
				while(s[top]!=')')
					pre[j++]=st.pop();
				st.pop();
				break;
			default:
				pre[j++]=in[i];
		}
	}
	while(top>-1)
		pre[j++]=st.pop();
	pre[j]='\0';
	strrev(pre);
	cout<<"Prefix Expression :- "<<pre;
	getch();
}