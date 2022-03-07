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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head,*prev=NULL,*curr=NULL,*res=head;
        
        int c=k;
        while(res!=NULL&&c>0){res=res->next;c--;}
        if(c>0){return head;}
        c=0;
        while(temp!=NULL&&c<k)
        {
            curr=temp->next;
            temp->next=prev;
            prev=temp;
            temp=curr;
            c++;
        }
        

         if(curr!=NULL){
            head->next=reverseKGroup(curr,k);
        }

        
        return prev;
    }
};