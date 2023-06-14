//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node *head3=NULL;
    Node *last;
     if(head1->data < head2->data)
     {
         head3=last=head1;
         head1=head1->next;
         head3->next=NULL;
     }
     else
     {
          head3=last=head2;
         head2=head2->next;
         head3->next=NULL;
     }
     while(head1 && head2)
     {
         if(head1->data < head2->data)
         {
             last->next=head1;
             last=head1;
             head1=head1->next;
             last->next=NULL;
         }
         else
         {
             last->next=head2;
             last=head2;
             head2=head2->next;
             last->next=NULL;
         }
     }
     if(head1)last->next=head1;
     if(head2)last->next=head2;
     return head3;
    // code here
}  