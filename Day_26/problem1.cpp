// Doubly linked list Insertion at given position
// https://www.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=insert-a-node-in-doubly-linked-list

class Solution {
    public:
      // Function to insert a new node at given position in doubly linked list.
      Node *addNode(Node *head, int pos, int data) {
          // code here
          Node * temp = head;
          int cnt = -1;
          while(temp){
              cnt++;
              if(cnt==pos){
                  break;
              }
              temp = temp->next;
          }
          if(temp->next==NULL) {
              Node * nn =new Node(data);
              temp->next = nn;
              nn->prev = temp;
              return head;
          }
          Node* front = temp->next;
          Node* nn = new Node(data);
          temp->next = nn;
          front->prev = nn;
          nn->prev = temp;
          nn->next = front;
          return head ;
      }
  };