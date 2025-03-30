// Reverse a Doubly Linked List
// https://bit.ly/3w6hUaa


// Using stack 
class Solution {
    public:
      // Function to reverse a doubly linked list
      DLLNode* reverseDLL(DLLNode* head) {
          // Your code here
          stack<int> stk;
          DLLNode * temp = head;
          while(temp){
              stk.push(temp->data);
              temp = temp->next;
          }
          temp = head ;
          while(temp){
              int a = stk.top();
              stk.pop();
              temp->data = a;
              temp = temp->next;
          }
          return head;
      }
  };
// TC : O(2N)
// SC : O(N)


class Solution {
    public:
      // Function to reverse a doubly linked list
      DLLNode* reverseDLL(DLLNode* head) {
          // Your code here
          if(head==NULL or head->next ==NULL) return head;
          DLLNode * curr = head ;
          DLLNode * last = NULL;
          while(curr){
              last = curr->prev;
              curr->prev = curr->next;
              curr->next = last;
              curr = curr->prev;
          }
          return last->prev;
      }
  };

// Time complexity : O(n)
// Space complexity : O(1)
