#include<iostream>
using namespace std;

class stack
{
	char arr[30];
	int siz;
	int top;
public:
	stack()
	{
		siz=30;
		top=-1;
	}
	void push(char val)
	{
		if(top>=siz)
		{
			cout<<"stack is overflow";
		}
		else
		{
			top++;
			arr[top]=val;
		}
	}
	void pop()
	{
		if(top==-1)
		{
			cout<<"stack is underflow";
		}
		else
		{
			top--;
		}
	}
	void peep()
	{
		cout<<arr[top];
	}
	void show()
	{
		int i;
		for(i=top;i>=0;i--)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	void balanced(char *c)
	{
		int i=0,f=1;
		while(c[i]!='\0')
		{
			if(c[i]=='('|| c[i]=='{' || c[i]=='[')
			{
				push(c[i]);
			}
			else if(c[i]==')' && arr[top]=='(')
					pop();
			else if(c[i]=='}' && arr[top]=='{')
					pop();
			else if(c[i]==']' && arr[top]=='[')
					pop();
            else
            {
                f=0;
                break;
            }
			i++;
		}
		show();
		if(f==0)
            cout<<"NO it is NOT balanced";
		else if(top==-1)
			cout<<"yes it is balanced";

		else
			cout<<"NO it is NOT balanced";
	}
};
int main()
{
	char ch[30];
	cin>>ch;
	stack s;
	s.balanced(ch);

}
