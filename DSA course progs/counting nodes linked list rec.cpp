//counting using recursion linked list
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
	int count(struct node *p)
	{
		if(p!=NULL)
		{
			return count(p->next)+1;
		}
		else
		return 0;
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
	int d=l1.count(l1.head);
	cout << d <<endl;
}