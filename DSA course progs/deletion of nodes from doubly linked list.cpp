//deletion of nodes from a doubly linked list
#include<iostream>
using namespace std;
struct node
{
    int data;
     node *prev,*next;
     node(int data)
     {
      this->data=data;
      this->next=this->prev=NULL;
     }
};
struct linkedlist
{
    node *head,*last;
    linkedlist()
    {
        head=last=NULL;
    }
    //input of doubly linked list
    void input(int x)
    {
        node *t=new node(x);
        t->prev=t->next=NULL;
        if(head==NULL)
        {
            head=last=t;
        }
        else{
            last->next=t;
            last=t;
            last->prev=head;
        }
    }
    //deletion
    void deletion(node *p,int pos)
    {
    	if(pos==1)
    	{
    		head=head->next;
       head->prev=NULL;
        delete p;
		}
		else
		{
			node *q=NULL;
        for(int i=0;i<pos-1;i++)
        {
            q=p;
            p=p->next;
        }
        if(p->next!=NULL)
        {
            q->next=p->next;
            p->next->prev=q;
            delete p;
            p=head;
      }
        else
        {
            q->next=NULL;
            delete p;
            p=head;
        }
		}
	}
	//display
    void display(node *p)
    {
        while(p!=NULL)
        {
            cout << p->data << " ";
            p=p->next;
        }
    }
};
int main()
{
    linkedlist l1;
    int n;
     cin>> n;
     for(int i=0;i<n;i++)
     {
         int x;
          cin >> x;
          l1.input(x);
     }
     l1.display(l1.head);
     int pos;
     cout << "enter the node to be deleted\n";
     cin>>pos;
     l1.deletion(l1.head,pos);
     l1.display(l1.head);
}
