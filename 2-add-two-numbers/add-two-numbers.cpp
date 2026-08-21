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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0); // Dummy node to simplify head initialization
        ListNode* curr = &dummy;
        int carry = 0;

        // Loop runs if there are nodes left or a leftover carry to process
        while (l1 != nullptr || l2 != nullptr || carry > 0) {
            if (l1 != nullptr) {
                carry += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                carry += l2->val;
                l2 = l2->next;
            }

            // Create a new node with the single-digit value
            curr->next = new ListNode(carry % 10);
            carry /= 10; // Extract the carry for the next iteration
            curr = curr->next;
        }

        return dummy.next; // Return the actual head of the result list
    }
};
