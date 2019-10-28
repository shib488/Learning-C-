#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node * next;
}*start;

node * create(int val)
{
	struct node * temp;
	temp=new(struct node);
	temp->data=val;
	temp->next=NULL;
	return temp;
}

void insert_val(int val)
{
	struct node * p;
	p=create(val);
	if(start==NULL)
	{
		start=p;
		p->next=NULL;
	}
	else
	{
		p->next=start;
		start=p;
	}

}

void push()
{
    int v;
    struct node *p,*t;
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

void reverse()
{
    struct node *prev,*cur, *frd;
    prev=NULL;
    cur=start;
    frd=NULL;
    while(cur!=NULL)
    {
        frd=cur->next;
        cur->next=prev;
        prev=cur;
        cur=frd;
    }
    start=prev;
}

int pop()
{
    int f;
    struct node *p, *t;
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
	struct node * temp;
	temp=start;
	while(temp != NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<"\n";
	//cout<<temp->data;
}



