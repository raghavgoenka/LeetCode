/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){return head;}
         Node* curr=head,*temp;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=new Node(curr->val);
            curr->next->next=temp;
            curr=temp;
        }
        curr=head;
        while(curr!=NULL)
        {
            curr->next->random=curr->random?curr->random->next:NULL;
            curr=curr->next->next;
        }
        Node* original=head,*copy=head->next;
        temp=copy;
        while(original!=NULL&&copy!=NULL)
        {
            original->next=original->next->next;
            copy->next=copy->next?copy->next->next:NULL;
            original=original->next;
            copy=copy->next;
        }
        return temp;
    }
};