//linear search in linked list
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
	void linearsearch(struct node *p,int n)
	{
		int f=0;
	while(p!=NULL)
	{
		if(n==p->data)
		{
			f++;
			 break;
		}
		else
		p=p->next;
	}
	if(f>0)
	{
		cout << "search successful"<<endl;
	}
	else
	cout << "search unsuccessful"<<endl;
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
	l1.linearsearch(l1.head,5);
	
}
//linear search with move to head#include <iostream>

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
node *head; node *first=NULL;
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
node* linearsearch(node *p,int key)
{
    while(p!=NULL)
    {

        if(p->data==key)
        {
            return p;
        }
        else
            p=p->next;
    }
    return NULL;
}
node* ls(node *p,int key)
{
    node *q=NULL;
    while(p!=NULL)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=head;
            head=p;
            return head;
        }
        else
        {
    q=p;
    p=p->next;
        }
    }
    return NULL;
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
     //node *res=l1.linearsearch(l1.head,23);
      node *res1=l1.ls(l1.head,23);

     if(res1)
    cout << "found"<<endl;
    else
    cout << "not\n";
}
