//normal input and display and cpunting of nodes of doubly linked list
#include <iostream>

using namespace std;
struct node
{
    int data;
    node *prev;
    node *next;
    node(int data)
    {
        this->data=data;
        this->prev=this->next=NULL;
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
        t->prev=NULL;
        t->next=NULL;
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
    void display(node *temp)
    {
        while(temp!=NULL)
        {
            cout <<temp->data << " ";
            temp=temp->next;
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
}
