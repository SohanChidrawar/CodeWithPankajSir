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
    Node* swapKth(Node* head, int k) {
        // code here
    if(!head)
        return head;
    
    vector<int> arr;
    Node *curr = head;
    while(curr)
    {
        arr.push_back(curr->data);
        curr = curr->next;
    }

    int n = arr.size();
    if(k>n) return head;
    
    swap(arr[k-1],arr[n-k]);
    
    Node *newhead = new Node(arr[0]);
    Node *tail = newhead;
    for(int i=1;i<n;i++)
    {
        tail->next = new Node(arr[i]);
        tail = tail->next;
    }
    
    return newhead;
    }
};
