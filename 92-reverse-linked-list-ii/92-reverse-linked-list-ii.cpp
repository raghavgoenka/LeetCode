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
    ListNode* rese;
    ListNode* reverse(ListNode* head,ListNode* t,int c,int left)
   {
       ListNode* curr = head;
       ListNode* prev = t;
       while(curr&&c>0)
       {
           c=c-1;
             if(c==0){rese=curr;}
          
           ListNode* next = curr->next;
         
           curr->next =  prev;
         
           prev = curr;
           curr = next;
           
       }
       return curr;
   }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right){return head;}
        ListNode* temp=head;
        for(int i=0;i<=left-2;i++){if(i==0){temp=head;} else{temp=temp->next;}}
      
        ListNode* prev=temp->next,*ans,*m=temp;
        if(left>1){
         ans=reverse(temp->next->next,temp->next,right-left,left);}
        else if(left==1){ ans=reverse(temp->next,temp,right-left,left);}
      
        if(left!=1){m->next=rese;prev->next=ans;}
        else{head->next=ans;head=rese;}
       
          return head;
    }
};