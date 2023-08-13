//insert at a position
    node* pos_insert(node *p,int x,int n)
    {
        node *t=new node(x);
        if(n==1)
        {
           t->next=p;
           p=t;
        }
        else{
            for(int i=1;i<n-1;i++)
                p=p->next;
            t->next=p->next;
            p->next=t;
            p=head;
        }

        return p;
    }