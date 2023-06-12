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
struct linkedlist
{
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
	//reverse using array(elements)
	void reverse(node *temp)
	{
		int c=0;
		node *p=temp;
		while(p!=NULL)
		{
			c++;
			p=p->next;
		}
		int A[c];
		int i=0;
		while(temp!=NULL)
		{
			A[i++]=temp->data;
			temp=temp->next;
		}
		i--;temp=head;
		while(temp!=NULL)
		{
			temp->data=A[i--];
			temp=temp->next;
		}
		
		
	}
	void display(node *p)
	{
		while(p!=NULL)
		{
			cout << p->data <<" ";
			p=p->next;
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
	  	int x;
	  	cin >> x;
	  	l1.input(x);
	  }
	  l1.display(l1.head);
	  l1.reverse(l1.head);
	  cout << endl;
	  l1.display(l1.head);
	  
	  
}