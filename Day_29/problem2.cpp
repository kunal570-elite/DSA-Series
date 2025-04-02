// 234. Palindrome Linked List
// https://leetcode.com/problems/palindrome-linked-list/
// Approach : Using array to store the LL data and then checking if it is palindrome or not
class Solution {
    public:
        bool isPalindrome(ListNode* head) {
            ListNode * temp = head;
            vector<int> v;
            while(temp!=NULL){
                v.push_back(temp->val);
                temp = temp->next;
            }
            int left = 0,right = v.size()-1;
            while(left<=right){
                if(v[left]!=v[right]){
                    return false;
                }
                left++; right--;
            }
            return true;
        }
    };
// TC : O(n)
// SC : O(n)
