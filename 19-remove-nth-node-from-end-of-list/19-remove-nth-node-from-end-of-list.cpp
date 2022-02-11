/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode();
    dummy->next=head;
         ListNode *temp=dummy,*temp1=dummy;
        if(head->next==NULL){return NULL;}
       
     for(int i=1;i<=n+1;i++){temp=temp->next;}
      
    
    while(temp!=NULL){temp=temp->next;temp1=temp1->next;}
     
        temp1->next=temp1->next->next;
       
      
      
return dummy->next;
    }
};