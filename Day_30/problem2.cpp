// Remove nth node from end
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

class Solution {
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode* slow = head;
            ListNode* fast = head;
            while(n--){
                fast = fast->next;
            }
            if(fast==nullptr){
                head = head->next;
                delete slow;
                return head;
            }
            while(fast->next!=nullptr){
                slow = slow->next;
                fast = fast->next;
            }
            ListNode* temp = slow->next;
            slow->next = slow->next->next;
            delete temp;
            return head;
        }
    };

// TC : O(n)
// SC : O(1)