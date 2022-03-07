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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* even =new ListNode(1),*odd=new ListNode(1);
        ListNode* a=even,*b=odd;
        ListNode* temp=head;
        int i=1;
        while(temp!=NULL)
        {
            if(i%2==0){even->next=temp;even=even=even->next;}
            else{odd->next=temp;odd=odd->next;}
            
            temp=temp->next;
            i++;
        }
        
        
      
        
        odd->next=a->next;
        even->next=NULL;
        
        return b->next;
        
        
        
    }
    
};