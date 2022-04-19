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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL){return head;}
    ListNode*low=NULL,*high=NULL,*head_low=NULL,*head_high=NULL;
    ListNode* temp=head;
//         cout<<temp->val<<" ";
//         if(temp->val==x){
//             // cout<<"a";/
//             if(high==NULL){high=temp;head_high=temp;}
//             else{
//                 ListNode* t=head_high;
//                 head_high=temp;
//                 head_high->next=t;
                
//             }
//         }
    while(temp!=NULL)
    {   
       if(temp->val>=x){
            if(high==NULL){head_high=temp;high=temp;}
            else{
                high->next=temp;
                high=high->next;
            }
        }
        else if(temp->val<x)
        {  if(low==NULL){
               head_low=temp;low=temp;}
            else{
               
                low->next=temp;
                low=low->next;
            }
        }
        temp=temp->next;
    }
       if(high!=NULL){ high->next=NULL;}
        if(head_low==NULL){return head_high;}
    head_high!=NULL?low->next=head_high:low->next=NULL;
    return head_low;
    }
};