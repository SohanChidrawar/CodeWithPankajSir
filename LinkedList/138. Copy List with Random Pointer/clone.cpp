/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
            return NULL;
        
        Node *curr = head;

        while(curr)
        {
            Node *Next = curr->next;
            Node *ptr = new Node(curr->val);
            ptr->next = curr->next;
            curr->next = ptr;
            curr = curr->next->next;
        }

        curr = head;
        while(curr)
        {
            if(curr->random)
                curr->next->random = curr->random->next;
            curr = curr->next->next;
        }

        Node *clone = new Node(-1);
        Node *cl = clone;
        curr = head;

        while(curr)
        {
            Node *copy = curr->next;
            curr->next = copy->next;    //restore original list
            cl->next = copy;            // clone list
            cl = cl->next;
            curr = curr->next;
        }

        return clone->next;
    }
};
