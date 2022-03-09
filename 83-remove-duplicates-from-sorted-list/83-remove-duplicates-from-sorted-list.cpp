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
        if(head==NULL){return head;}
        ListNode *temp=head ,*temp1=head->next;
   
    while(temp1)
    {
        if(temp1->val==temp->val){temp->next=temp1->next;temp1=temp1->next;continue;}
        
        temp1=temp1->next;
        temp=temp->next;
    }
    return head;
    }
};