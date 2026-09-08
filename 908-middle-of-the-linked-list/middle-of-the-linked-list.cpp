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
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
        int i=1;
        ListNode* temp=head;
        ListNode* midvalue=nullptr;
        if(head==nullptr){
            return nullptr;
        }
        else if(head->next==nullptr){
            return head;
        }
        while(temp!=nullptr){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        int mid=(cnt/2)+1;
        while(i<mid){
            midvalue=temp->next;
            temp=temp->next;
            i++;
        }
        return midvalue;

    }
};