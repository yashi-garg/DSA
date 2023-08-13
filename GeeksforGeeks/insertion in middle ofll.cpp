//deletion from middle of linkedlist
//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	// Code here
   Node *t=new Node(x);
   if(head==NULL)
   return t;
   else
   {
       int c=0;
       Node *p=head;
       while(p!=NULL)
       {
       c++;
       p=p->next;
       }
       p=head;
       if(c%2==0)
       {
       c=(c/2)+1; 
       for(int i=1;i<c-1;i++)
       p=p->next;
       t->next=p->next;
       p->next=t;
       }
       else
       {
           c=(c/2)+2;
           for(int i=1;i<c-1;i++)
       p=p->next;
       t->next=p->next;
       p->next=t;
       }
       return head;
    }
}