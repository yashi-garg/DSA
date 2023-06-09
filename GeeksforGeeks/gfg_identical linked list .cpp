//function to check for identical linked list
bool areIdentical(struct Node *head1, struct Node *head2)
{
    int l1=0,l2=0;
    struct Node *temp1,*temp2;
   temp1=head1;temp2=head2;
    while(temp1!=NULL)
    {
        l1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        l2++;
        temp2=temp2->next;
    }
    if(l1!=l2)
    return false;
    else
    {
        int l1=0;
        while(head1!=NULL)
        {
            if(head1->data==head2->data)
            l1++;
            head1=head1->next;
            head2=head2->next;
        }
        if(l1==l2)
        return true;
        else
        return false;
    }
    // Code here
}