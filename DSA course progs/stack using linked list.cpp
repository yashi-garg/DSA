//stack using linked list
#include <iostream>

using namespace std;
class node
{
    public:
    int data;
     node *next;
};
class stack{
   node *top;
   public:
       stack()
       {
           top=NULL;
       }
       void push(int x);
       int pop();
       void display();
};
void stack::push(int x)
{
    node *t=new node;
    if(t==NULL)
    {
        cout << "stack overflow\n";
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
int stack::pop()
{
    int x=-1;
    if(top==NULL)
        cout <<"stack is empty\n";
    else
    {
    x=top->data;
    node *t=top;
    top=top->next;
    delete t;
    }
    return x;
}
void stack::display()
{

    node *p=top;
    while(p!=NULL)
    {
      cout << p->data<<" ";
      p=p->next;
    }
    cout << endl;
}


int main()
{
  stack stk;
  int n;
  cout << "enter the number of elements\n";
  cin >> n;
  for(int i=0;i<n;i++)
  {
      int x;
      cout << "enter an element\n";
      cin >> x;
      stk.push(x);
  }
  stk.display();
  cout << endl;
  for(int i=0;i<n;i++)
  {
      cout<<stk.pop()<<endl;
  }
}
