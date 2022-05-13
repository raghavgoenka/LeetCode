/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
         Node*cur=root;
       while(cur!=NULL)
       {
            Node* dummy=new  Node(0); //dummy node 
           //created at every level to traverse though nextRight pointer
           //basically creating a linked list at every node to traverse the other level
           Node*temp=dummy;
           while(cur!=NULL)
           {
              if(cur->left!=NULL)
              {
                  temp->next=cur->left;
                  temp=temp->next;
              }
              if(cur->right!=NULL)
              {
                  temp->next=cur->right;
                  temp=temp->next;
              }
              cur=cur->next;
              
           }
           cur=dummy->next;
           }
        return root;
    }
};