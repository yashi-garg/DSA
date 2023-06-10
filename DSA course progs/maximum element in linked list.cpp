//finding the maximum element in a linked list
#include<iostream>
using namespace std;
struct node{
	int data;
	 struct node *next;
	 node(int data)
	 {
	 	this->data=data;
	 }
};
struct linkedlist{
	struct node *head;
	linkedlist()
	{
		head=NULL;
	}
	void input(int x)
	{
	 node *temp=new node(x);
		temp->next=head;
		head=temp;
	}
	//normal function to find the maximum element in a linked list
	int max(struct node *p)
	{
	int max=p->data;
	while(p!=NULL)
	{
		if(p->data>max)
		max=p->data;
		p=p->next;
	}
	return max;
	}
	//recursive function to finsd the maximum value in a linked list
	int maxrec(struct node *p,int max)
	{
	if(p!=NULL)
	{
		if(p->data>max)
		{
			max=p->data;
			maxrec(p->next,max);
		}
		else
		maxrec(p->next,max);
		}
		else
		return max;	
	}
};
int main()
{
	linkedlist l1;
	int n;
	cout <<"enter the number of dimension\n";
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cout<< "enter a number \n";
		int x;
		 cin >> x;
		 l1.input(x);
	}
	int d=l1.maxrec(l1.head,l1.head->data);
	cout << "MAXIMUM ELEMENT="<<d <<endl;
}