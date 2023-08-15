//deleting every kth node from a ll
 //Your code here
  if(K==1)return NULL;
  Node *temp=head;
  Node *prev=NULL;;
  int count=1;
  while(temp!=NULL){
      if(count!=K){
          prev=temp;
          temp=temp->next;
          count++;
      }
      else{
          prev->next=temp->next;
          temp->next=NULL;
          temp=prev->next;
          count=1;
      }
  }
  return head;