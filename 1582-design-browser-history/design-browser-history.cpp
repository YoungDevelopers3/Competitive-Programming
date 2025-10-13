struct Node{
  Node* prev=nullptr;
  Node* next=nullptr;
  string url;
  Node(const string& u):url(u){}
};
class BrowserHistory {
public:
    BrowserHistory(string homepage) {
        curr=new Node(homepage);
    }

    
    void visit(const string& url) {
        // 1) delete any forward history
        if (curr->next) {
            deleteForward(curr->next);
            curr->next = nullptr;
        }
        // 2) append new node
        Node* n = new Node(url);
        n->prev = curr;
        curr->next = n;
        curr = n;
    }

    string back(int steps) {
        while (steps-- > 0 && curr->prev) curr = curr->prev;
        return curr->url;
    }

    string forward(int steps) {
        while (steps-- > 0 && curr->next) curr = curr->next;
        return curr->url;
    }

    ~BrowserHistory() {
        // move to head
        Node* head = curr;
        while (head && head->prev) head = head->prev;
        // delete from head forward
        deleteForward(head);
    }

private:
    Node* curr = nullptr;

    static void deleteForward(Node* start) {
        while (start) {
            Node* nxt = start->next;
            delete start;
            start = nxt;
        }
    }

};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */