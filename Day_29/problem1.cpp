// Find the length of loop in linkedlist
// https://bit.ly/3dyXL6m

/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
// Approach : Iterating through the linked list using temp variable and storing index of node with their index
// if any node repeats then return the index - previous index of the node;
class Solution {
    public:
      // Function to find the length of a loop in the linked list.
      int countNodesinLoop(Node *head) {
          // Code here
          // Using O(n) space complexity
          Node * temp = head;
          int index = 0;
          map<Node *,int> mpp;
          while(temp!=nullptr){
              if(mpp.find(temp)!=mpp.end()){
                  return index - mpp[temp];
              }
              else {
                  mpp[temp]=index;
                  index++;
                  temp = temp->next;
              }
              
          }
          return 0 ;
      }
  };
//   TC : O(n)
//  SC : O(n) use of map to store the index


// Approach : Using tortoise and hare algo

// ->iterating again through the loop after slow and fast are equal until slow is equal to fast and countin the count++
class Solution {
    public:
      // Function to find the length of a loop in the linked list.
      int countNodesinLoop(Node *head) {
          // Code here
          Node * slow = head;
          Node * fast = head;
          while(fast != NULL  && fast->next!= nullptr){
              slow = slow->next;
              fast = fast->next->next;
              if(slow == fast){
                  int count = 1;
                  slow = slow->next;
                  while(slow!=fast){
                      count++;
                      slow = slow->next;
                  }
                  return count;
              } 
          }
          return 0;
      }
  };

//   TC : O(n);
//   SC : O(1);