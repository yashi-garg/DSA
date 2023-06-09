//gfg finding the nth node from the last
int getNthFromLast(Node *head, int n)
    {
           // Your code here
           Node *temp=head;
           int c=0;
           while(temp!=NULL)
           {
               c++;
               temp=temp->next;
           }
           if(n<=c)
           {
           int x=0,t=0;
           while(head!=NULL)
           {
             x++;
             if(x==(c-(n-1)))
             {
                 t=head->data;
                 break;
             }
             head=head->next;
           }
           return t;
    }
    else
    return -1;
        
    }