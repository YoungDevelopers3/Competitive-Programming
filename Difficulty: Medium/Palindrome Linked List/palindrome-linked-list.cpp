/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    Node* reversed(Node* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node* newHead=reversed(head->next);
        Node* front=head->next;
        front->next=head;
        head->next=NULL;
        return newHead;
    }
  
  
    bool isPalindrome(Node *head) {
        
        if(head==NULL || head->next==NULL){
            return true;
        }
        
        Node* slow=head;
        Node* fast=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        Node* newHead= reversed(slow->next);
        Node* first=head;
        Node* second=newHead;
        
        while(second!=NULL){
            if(first->data!=second->data){
                reversed(newHead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reversed(newHead);
        return true;
    }
};