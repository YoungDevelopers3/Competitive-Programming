/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        int len=1;
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            len++;
        }
        
        k=k%len;
        if(k==0){
            return head;
        }
        temp->next=head;
        Node* tail= head;
     
        for(int i=1;i<k;i++){
            tail=tail->next;
        }
        Node* newHead= tail->next;
        tail->next=NULL;
        return newHead;
        
        
        
    }
};