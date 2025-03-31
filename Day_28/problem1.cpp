// 141. Linked List Cycle
// https://leetcode.com/problems/linked-list-cycle/description/


// Optimal Approach
// Using Tortoise and Hare Algo.

class Solution {
    public:
        bool hasCycle(ListNode *head) {
            ListNode * slow = head ;
            ListNode * fast = head;
            while(fast!=NULL && fast->next!=NULL){
                slow = slow->next;
                fast = fast->next;
                fast = fast->next;
                if(slow==fast){
                    return true;
                }
            }
            return false;
        }
    };
// Brute force approach

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
        bool hasCycle(ListNode *head) {
            ListNode * temp = head;
            map<ListNode* ,int> mpp;
            while(temp){
                if(mpp.find(temp)==mpp.end()){
                    mpp[temp]=1;
                }
                else return true;
                temp = temp->next;
            }
        return false;
        }
    };
// TC : O(n) Iterating through each node atleast once
// SC : O(n) storing each node in map 

