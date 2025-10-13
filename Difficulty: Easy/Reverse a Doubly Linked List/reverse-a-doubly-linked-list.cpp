/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
       Node* current=head;
       Node* temp=NULL;
       while(current!=NULL){
          temp=current->prev;
          current->prev=current->next;
          current->next=temp;
          head=current;
          current=current->prev;
       }
       return head;
        
    }
};