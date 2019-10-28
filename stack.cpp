#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
    node * next;
};

class stack
{
public:
    int siz;
    node *head;
    stack(int n)
    {
        siz=n;
        head=NULL;
    }
    node *create(int val)
    {
        node *p;
        p=new(struct node);
        p->data=val;
        p->next=NULL;
        return p;
    }
    void push()
    {
        int v;
        node *p,*t;
        cout<<"Enter the value : ";
        cin>>v;
        p=create(v);
        t=head;
        if(head==NULL)
        {
            head=p;
            p->next=NULL;
        }
        else
        {
            p->next=t;
            head=p;
        }
    }
    int pop()
    {
        int f;
        node *p, *t;
        t=head;
        if(head==NULL)
        {
            cout<<"stack is empty.";

        }
        else
        {
            p=t;
            head=t->next;
            f=t->data;
            delete(t);
        }
        return f;
    }
    void show()
    {
        node *t;
        t=head;
        while(t!=NULL)
        {
            cout<<t->data<<endl;
            t=t->next;
        }
    }
};

int main()
{
    int n,i,t=0;
    cout<<"Enter the size : ";
    cin>>i;
    stack s(i);
    do
    {
        cout<<"\n1. for insertion \n2. for deletion \n3. traverse \n4.exit";
        cout<<"\nEnter the option: ";
        cin>>n;
        switch(n)
        {
            case 1:
                if(t<i)
                {
                    s.push();
                    t++;
                }
                else
                    cout<<"Stack is full\n";

                    break;
            case 2: s.pop();
                    break;
            case 3: s.show();
                    break;
            default:
                cout<<"Enter the correct option\n";
        }
    }while(n!=4);
}

