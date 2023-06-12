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
	//input
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
	//check sorted or not
	bool fun(node *p)
	{
		int x=-32768;
		while(p!=NULL)
		{
			if(x>p->data)
			return false;
			else
			x=p->data;
			p=p->next;
		}
		return true;
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
	bool r=l1.fun(l1.head);
	if(r)
	{
		cout <<"sorted"<<endl;
	}
	else
	cout <<"not sorted"<<endl;

	
}