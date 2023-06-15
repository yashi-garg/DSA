//insertion of node in a doubly linked list
#include<iostream>
using namespace std;
struct node
{
  int data;
  node *prev,*next;
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
        head=last=NULL;
    }
    //input of a doubly linked list
    void input(int x)
    {
        node *t=new node(x);
        t->prev=t->next=NULL;
        if(head==NULL)
            head=last=t;
        else{
           last->next=t;
           last=t;
           last->prev=head;
        }
    }
    //insertion of an element before the first node
    node* insertion(node *temp,int x)
    {
        node *t=new node(x);
        t->prev=NULL;
        t->next=temp;
        temp->prev=t;
        temp=t;
    }
    //insertion at any position in the doubly linked list using only one pointer
    node* insertion1(node *temp,int x,int pos)
    {
        node *t=new node(x);
        for(int i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        t->prev=temp;
        t->next->prev=t;
        temp=head;
        return temp;
    }
    //displaying the linked list
    void display(node *temp)
    {
        while(temp!=NULL)
        {
            cout << temp->data << " ";
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
        cin >>x;
        l1.input(x);
    }
    l1.display(l1.head);
    node* res=l1.insertion1(l1.head,45,5);
    cout << endl;
    l1.display(res);
}
