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
    ListNode* rotateRight(ListNode* head, int k) {
        int n=0;
        if(head==NULL||k==0||head->next==NULL){return head;}
        ListNode*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            n++;
        }
        n++;
        ListNode* last=temp;
        
        k=k%n;
        k=n-k;
       
        
        temp=head;
        ListNode* first=NULL; 

        if(k==n){return head;}
        while(temp!=NULL&&k>0)
        {
            first=temp;
            temp=temp->next;
            k--;
            
        }
        
        first->next=NULL;
        last->next=head;
        head=temp;
        return head;
        
        
        
        
        
    }
};