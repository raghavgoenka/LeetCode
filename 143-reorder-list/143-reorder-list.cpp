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
    ListNode* middle(ListNode* head)
    {
        ListNode *slow=head,*fast=head;
        while( fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast==NULL){return slow;}
        
        return slow->next;
    }
     ListNode* reverse(ListNode* head)
    {
        ListNode *curr=head,*prev=NULL,*next=NULL;
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            
        }
        
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* temp=head;
        ListNode* mid=middle(head);
        ListNode*rev=reverse(mid);
        ListNode* prev=head,*next=rev,*prev1=rev;
        ListNode* a=mid,*b=rev;
       
        while(temp!=mid&&next!=NULL)
        {
            prev=temp->next;
            temp->next=next;
            prev1=next->next;
            next->next=prev;
            temp=prev;
            next=prev1;
            
        }
        temp->next=NULL;
        
    }
};