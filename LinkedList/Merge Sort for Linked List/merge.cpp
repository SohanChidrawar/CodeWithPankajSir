/*
class Node {
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* mergeSort(Node* head) {
        // code here
        if(head==NULL)
            return head;
            
        Node *curr = head;
        vector<int>arr;
        
        while(curr)
        {
            arr.push_back(curr->data);
            curr = curr->next;
        }
        
        sort(arr.begin(),arr.end());
        
        Node *ptr = head;
        
        for(int i=0;i<arr.size();i++)
        {
            ptr->data = arr[i];
            ptr = ptr->next;
        }
        
        return head;
    }
};
