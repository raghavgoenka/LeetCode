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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
    
        if(lists.size()==0){
        return NULL;}
        vector<int>v;
        
        for(int i=0;i<lists.size();i++){
           ListNode* temp=lists[i];
            while(temp!=NULL)
            {
                v.push_back(temp->val);
                temp=temp->next;
            }
         }
        if(v.size()==0){return NULL;}
        sort(v.begin(),v.end());
       ListNode* res= new ListNode(0);
        ListNode* temp=res;
        
        for(int i=0; i<v.size(); i++){
            
            res->next=new ListNode(v[i]);
            res=res->next;
        }
        
        return temp->next;      
        
        
       
    }
};