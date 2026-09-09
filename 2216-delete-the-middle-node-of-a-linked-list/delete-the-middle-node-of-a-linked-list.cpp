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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        int cnt=0;
        int i=1;    
        ListNode* temp=head;
        ListNode* midvalue=head;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        int mid=(cnt/2);
        while(i<mid){
            midvalue=temp->next;
            temp=temp->next;
            i++;

        }
        temp=head;
        temp=midvalue->next;
        midvalue->next=midvalue->next->next;
        delete temp;
        return head;
    }
};