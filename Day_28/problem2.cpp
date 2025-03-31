// 876. Middle of the Linked List
// https://leetcode.com/problems/middle-of-the-linked-list/description/


// Approach : Brute by finding length first 
class Solution {
    public:
        int lengthLinkedList(ListNode * head){
            ListNode* temp = head ;
            int size =0;
            while(temp){
                size++;
                temp = temp->next;
            }
            return size;
        }
        ListNode* middleNode(ListNode* head) {
            int size = lengthLinkedList(head);
            int mid = size/2;
            int count =1;
            ListNode * temp = head;
            while (temp && count<=mid){
                count++;
                temp = temp->next;
            }
            return temp;
        }
    };

// Approach : Using tortoise and hare algo 
class Solution {
    public:
        ListNode* middleNode(ListNode* head) {
            ListNode * slow = head ;
            ListNode * fast = head ;
            while (fast!=NULL && fast->next!=NULL){
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow;
        }
    };

// TC : O(n/2)
// SC : O(1)