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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head->next;
        ListNode* prev=temp;
        ListNode* t=prev;
        int sum=0;
        while(temp!=NULL)
        {
            if(temp->val==0)
            {
                cout<<sum<<" ";
                prev->val=sum;
                if(temp!=NULL&&temp->next!=NULL){
                prev->next=temp->next;prev=temp->next;}
                else{prev->next=NULL;break;}
                sum=0;
                
            }
            else{sum+=temp->val;}
            
            temp=temp->next;
        }
        return t;
    }
};