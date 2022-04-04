class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
            // if(k>num)return head;
    ListNode *left,*right,*trav = head,*leftprev=NULL,*rightprev=NULL;
    int i=0;
    while(++i<k && trav!=NULL){
        leftprev = trav;
        trav = trav->next;}
     if(i<k){return head;}
    left = trav;
    
    i=0;
    rightprev=left;
    trav=head;
     ListNode* t=NULL;
        
    while(rightprev->next!=NULL){ 
       
        t=trav;
        rightprev=rightprev->next;
        trav=trav->next;
      }
    right=trav;
        rightprev=t;
//         cout<<leftprev->val<<" "<<left->val<<" ";
// cout<<rightprev->val<<" "<<right->val<<" ";
       
    if(!leftprev)head=right;
    else leftprev->next = right;
    if(!rightprev)head = left;
    else rightprev->next = left;
    swap(right->next,left->next);
    return head;
    }
};







