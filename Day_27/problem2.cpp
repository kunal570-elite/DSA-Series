// Delete in a Doubly Linked List
// https://bit.ly/3QlEoMx

class Solution {
    public:
      // Function to delete a node at given position.
      Node* deleteNode(Node* head, int x) {
          // Your code here
          if(head==NULL or head->next==NULL) return NULL;
          int cnt = 0;
          Node * temp = head;
          while(temp){
              cnt++;
              if(cnt==x){
                  break;
              }
              temp= temp->next;
          }
          Node * front = temp->next;
          Node * back = temp->prev;
          
          if(front==NULL && back ==NULL){
              return NULL;
          }
          else if (front==nullptr){
              back->next = NULL;
              temp->prev = NULL;
              delete temp;
              return head;
          }
          else if (back ==nullptr){
              // Deleting the first node
              head = head->next;
              head->prev = NULL;
              delete temp;
              return head;
          }
          back->next = front;
          front->prev = back;
          temp->next = NULL;
          temp->prev =NULL;
          delete temp;
          return head;
      }
  };

//   TC : O(n)
//   SC : O(1)
