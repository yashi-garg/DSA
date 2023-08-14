//deletion of middle element of linkedlist
Node* deleteMid(Node* head)
{
    // Your Code Here
    int c=0;
    Node *head1=head;
				Node *temp=head;
				while(temp!=NULL)
				{
		         c++;
		         temp=temp->next;
				}
				if(c==1)
				{
				    return NULL;
				}
				else
				{
				c=(c/2)+1;
				temp=head->next;
				for(int i=1;i<c-1;i++)
				{
					head=head->next;
					temp=temp->next;
				}
				head->next=temp->next;
				delete temp;
				return head1;
				}
				
}