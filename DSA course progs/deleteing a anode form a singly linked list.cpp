//deleting a node from a singly linked list
Node* deleteNode(Node *head,int x)
{
    Node *p=head;
    if(x==1)
    {
     p=p->next;
     delete head;
      head=p;
      return head;
    }
    else
    {
    Node *q=NULL;
    for(int i=0;i<x-1;i++)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    delete p;
    p=head;
    return p;
    }
    //Your code here
}

