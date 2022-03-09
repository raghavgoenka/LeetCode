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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr=head,*prev=new ListNode(2);
        ListNode* t=prev;
        if(head==NULL||head->next==NULL){return head;}
        while(curr!=NULL&&curr->next!=NULL)
        {
            cout<<curr->val<<" ";
            if(curr->val!=curr->next->val)
            {
                prev->next=curr;
                prev=prev->next;
            }
            else{
           
                while(curr->next!=NULL&&curr->val==curr->next->val)
            {
                curr=curr->next;
            }
                
                prev->next=curr->next?curr->next:NULL;
            }
            curr=curr->next;
            
        }
        return t->next;
        
        
    }
};