#include <iostream>

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
    //creation by inputing values always at the last of a linked list
    void input(int x)
    {
        node *t=new node(x);
        t->next=NULL;
        if(head==NULL)
        {
            head=last=t;
        }
        else{
            last->next=t;
            last=t;
            }

    }
    //inserting an element  at a sorted pos in a a sorted linkedlist
    void sorted(node *p,int x)
    {
        node *t=new node(x);
        t->next=NULL;
        node *q=NULL;
        if(head==NULL)
        {
            head=t;
        }
        else
        {
            while(p&&p->data<x)
            {

                q=p;
                p=p->next;
            }
            if(p==head)
            {

                t->next=head;
                head=t;
            }
            else
            {
                t->next=q->next;
                q->next=t;
            }
        }
    }
    void display()
    {
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }

    }

};

int main()
{
    linkedlist l1;
    int n;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        int x;
         cin >> x;
         l1.input(x);
         }
         l1.sorted(l1.head,5);
l1.display();
}

