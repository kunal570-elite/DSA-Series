// Linked List Insertion At End
// Link : https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=linked-list-insertion

/*Structure of the linked list node is as

struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
    public:
      Node *insertAtEnd(Node *head, int x) {
          // Code here
          Node * temp = head;
          Node * last = new Node(x);
          if(head==NULL){
              return last;
          }
          while(temp->next!=NULL){
              temp = temp->next;
          }
          temp->next = last;
          return head;
      }
  };