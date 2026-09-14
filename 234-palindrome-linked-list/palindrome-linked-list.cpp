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
    bool isPalindrome(ListNode* head) {
        int cnt=0;
        ListNode* head1=head;
        ListNode* mid1value=head;
        ListNode* mid2value=head;
        ListNode* head2=head;
        if(head==nullptr || head->next==nullptr) return true;

        while(head1!=nullptr){
            cnt++;
            head1=head1->next;
        }
        int mid1= cnt/2;

        if(cnt%2==0){
            for(int i=0; i<mid1; i++){
                mid2value=mid2value->next;
            }
        }
        else{
            for(int i=0; i<=mid1; i++){
                mid2value=mid2value->next;
            }

        }
        ListNode* t1=head->next;
        ListNode* t2=head;
        ListNode* mover=head->next->next;
        t2->next=nullptr;
        
        for(int i=1; i<mid1; i++){
            mover=t1->next;
            t1->next=t2;
            t2=t1;
            t1=mover;
        }
        head2=t2;
       while(head2!=nullptr && mid2value!=nullptr){
            if(head2->val!=mid2value->val) return false;
            mid2value=mid2value->next;
            head2=head2->next;
        } return true;
        
    }
};