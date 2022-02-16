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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=head;
        if(head==NULL||head->next==NULL){return head;}
        while(temp!=NULL&&temp->next!=NULL)
        {
            int a=temp->val;
            int b=temp->next->val;
            temp->val=b;
            temp->next->val=a;
            temp=temp->next->next;
        }
        
        return head;
    }
};