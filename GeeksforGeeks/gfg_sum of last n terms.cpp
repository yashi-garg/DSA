//gfg finding the sum of the last n nodes of a linked list
int sumOfLastN_Nodes(struct Node* head, int n)
{
    struct Node *current;
    current=head;
    struct Node *prev=NULL,*next=NULL;
    while(current!=NULL)
    {
      next=current->next;
      current->next=prev;
      prev=current;
      current=next;
    }
    head=prev;
    int sum=0,i=1;
    while(i<=n)
    {
        sum=sum+head->data;
        head=head->next;
        i++;
    }
    return sum;
      // Code here
}