// User function template for C++

/*
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
    Node* divide(Node* head) {
        // code here
        // maintain separate LL for even and odd node 
        // eS:even start eE:even end oS:odd start oE:odd end
        Node *eS=NULL, *eE=NULL, *oS=NULL, *oE=NULL;
        
        for(Node *curr=head;curr!=NULL;curr=curr->next)
        {
            int x = curr->data;
            if(x%2==0)
            {
                if(eS==NULL)
                {
                    eS = curr;
                    eE = curr;
                }
                else
                {
                    eE->next = curr;
                    eE = eE->next;
                }
            }
            else
            {
                if(oS==NULL)
                {
                    oS = curr;
                    oE = curr;
                }
                else
                {
                    oE->next = curr;
                    oE = oE->next;
                }
            }
        }
        
        if(oS==NULL || eS==NULL)
            return head;
        
        eE->next = oS;
        oE->next = NULL;
        return eS;
        
    }
};
