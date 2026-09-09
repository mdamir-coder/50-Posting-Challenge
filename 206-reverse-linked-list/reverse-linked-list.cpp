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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        else if(head->next==nullptr){
            return head;
        }
        ListNode* mover=head->next->next;
        ListNode* t1=head->next;
        ListNode* t2=head;
        t2->next=nullptr;
        while(mover!=nullptr){
            t1->next=t2;
            t2=t1;
            t1=mover;
            mover=mover->next;
            
        }
        t1->next=t2;
        head=t1;
        return head;
    }
};