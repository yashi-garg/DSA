/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)
        return false;
     if(head->next==NULL )
     return false;
     ListNode *temp=head;
     ListNode *prev=NULL;
     while(prev!=temp&&temp!=NULL &&temp->next!=NULL )
     {
        if(prev==NULL)
        {
            prev=temp;
            temp=temp->next->next;
        }
        else{
        temp=temp->next->next;
        prev=prev->next;
        }
     }  
     if(temp==prev)
     return true;
     else
     return false;
    }
};