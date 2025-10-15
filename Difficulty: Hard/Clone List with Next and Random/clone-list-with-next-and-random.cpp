/*
class Node {
  public:
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
  public:
    Node* cloneLinkedList(Node* head) {
        if(head==NULL){
            return NULL;
        }
        unordered_map<Node*,Node*>m;
        Node* oldTemp=head;
        Node* newHead=new Node(head->data);
        oldTemp=oldTemp->next;
        Node* newTemp=newHead;
        m[head]=newHead;
        while(oldTemp!=NULL){
            Node* copyNode=new Node(oldTemp->data);
            m[oldTemp]=copyNode;
            newTemp->next=copyNode;
            newTemp=newTemp->next;
            oldTemp=oldTemp->next;
        }
        
        oldTemp=head;
        newTemp=newHead;
        while(oldTemp!=NULL){
            newTemp->random=m[oldTemp->random];
            oldTemp=oldTemp->next;
            newTemp=newTemp->next;
        }
        
        return newHead;
        
        
        
    }
};