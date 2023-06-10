//sum_of_nodes_in_linkedlist_using rec
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
	int sum(struct node *p)
	{
		if(p!=NULL)
		{
			
	return (sum(p->next))+p->data;
	
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
	int d=l1.sum(l1.head);
	cout << "SUM="<<d <<endl;
}