//deletion of elemnts
#include<iostream>
using namespace std;
struct node{
	int data;
	 node *next;
	 node(int data)
	 {
	 	this->data=data;
	 	this->next=NULL;
	 }
};
struct linkedlist{
	node *head,*last;
	linkedlist()
	{
		head=NULL;
		last=NULL;
	}
	void input(int x)
	{
		node *t=new node(x);
		t->next=NULL;
		if(head==NULL)
		{
			head=last=t;
		}
		else
		{
			last->next=t;
		last=t;
		}
	}
	void display(node *p)
	{
		while(p!=NULL)
		{
			cout << p->data<<" ";
			p=p->next;
		}
	}
	
	void deletion(int pos)
	{
	  node *p,*q;
	  if(pos==1)
	  {
	  	p=head;
	  	head=head->next;
	  	delete p;
	}
	else
	{
		q=NULL;
		p=head;
		for(int i=0;i<pos-1;i++)
		{
			q=p;
			p=p->next;
		}
		q->next=p->next;
		delete p;
	}
	}
};
int main()
{
	linkedlist l1;
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int x; cin >> x;
		l1.input(x);
	}
	l1.display(l1.head);
	l1.deletion(1);
	cout << endl;
	l1.display(l1.head);
}