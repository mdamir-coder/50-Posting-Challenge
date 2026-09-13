/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp=head;
        unordered_set<ListNode*> nodeset;
        while(temp!=nullptr){
            if(nodeset.find(temp)!=nodeset.end()){
                return temp;
            }
            nodeset.insert(temp);
            temp=temp->next;
        } return nullptr;
        
    }
};