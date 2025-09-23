/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        Node* zeroT=new Node(-1);
        Node* oneT=new Node(-1);
        Node* twoT=new Node(-1);
        
        Node* zero=zeroT;
        Node* one=oneT;
        Node* two=twoT;
        
        Node* current=head;
        
        while(current!=NULL){
            if(current->data==0){
                zero->next=current;
                zero=zero->next;
            }
            if(current->data==1){
                one->next=current;
                one=one->next;
            }
            if(current->data==2){
                two->next=current;
                two=two->next;
            }
            current=current->next;
            
        }
        
        zero->next=oneT->next?oneT->next:twoT->next;
        one->next=twoT->next;
        two->next=NULL;
        head=zeroT->next;
        
        delete(zeroT);
        delete(oneT);
        delete(twoT);
        
        return head;
        
        
    }
};