/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    
    void modifyarray(vector<int>&arr)
    {
        int n = arr.size();
        for(int i=0;i<n/2;i++)
        {
            int x = arr[i];
            arr[i] = arr[n-i-1] - x;
            arr[n-i-1] = x;
        }
    }
  
    struct Node* modifyTheList(struct Node* head) {
        // add code here.
        if(!head->next)
            return NULL;
        
        // count number of node
        int n = 0;
        struct Node *curr = head;
        while(curr)
        {
            n++;
            curr = curr->next;
        }
        
        // create an array to store LL data
        vector<int> arr(n);
        
        curr = head;
        for(int i=0;i<n;i++)
        {
            arr[i] = curr->data;
            curr = curr->next;
        }
        
        // modify array
        modifyarray(arr);
        
        curr = head;
        // add array data to LL
        for(int i=0;i<n;i++)
        {
            curr->data = arr[i];
            curr = curr->next;
        }
        
        return head;
    }
};
