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
      ListNode* reverse(   ListNode *head)
   {
         ListNode* dummy=NULL;
       while(head!=NULL)
       {
             ListNode *next=head->next;
           head->next=dummy;
           dummy=head;
           head=next;
       }
       return dummy;
   }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
          ListNode* t1=reverse(l1);
          ListNode* t2=reverse(l2);
          ListNode* dummy=new  ListNode(0);
          ListNode* res=dummy;
        
        int sum=0,carry=0;
        
        while(t1!=NULL||t2!=NULL||carry!=0)
        {
            if(t1!=NULL)
            {
                sum+=t1->val;
                t1=t1->next;
            }
            if(t2!=NULL)
            {
                sum+=t2->val;
                t2=t2->next;
            }
            sum+=carry;
            carry=sum/10;
            sum=sum%10;
              ListNode* n=new ListNode(sum);
            res->next=n;
            res=res->next;
            sum=0;
            
        }
        return reverse(dummy->next);
    }
};