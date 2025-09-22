/*
class Node {
  public:
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
  
  Node* reverseList(Node* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node* newhead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
        
    }
    Node* removeLeadingZeros(Node* head) {
    while (head && head->data == 0) {
        head = head->next;   // skip all zeros
    }
    if (!head) return new Node(0); // if all were zeros, return single 0
    return head;
}
  
    Node* addTwoLists(Node* head1, Node* head2) {
        Node* dummy=new Node(0);
        Node* temp1=reverseList(head1);
        Node* temp2=reverseList(head2);
        Node* current=dummy;
        int carry=0;
        while(temp1!=NULL || temp2!=NULL){
            int sum=carry;
            if(temp1){
                sum=sum+temp1->data;
            }
            if(temp2){
                sum=sum+temp2->data;
            }
            Node* newNode=new Node(sum%10);
            carry=sum/10;
            current->next=newNode;
            current=current->next;
            if(temp1){
                temp1=temp1->next;
            }
            if(temp2){
                temp2=temp2->next;
            }
            
            
        }
        if(carry){
            Node* newNode=new Node(carry);
            current->next=newNode;
        }
        
        Node* header=reverseList(dummy->next);
        header=removeLeadingZeros(header);
        return header;
        
    }
};