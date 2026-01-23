/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {

            vector<int>res;
            while(head)
            {
                res.push_back(head->val);
                head = head->next;
            }

            int n = res.size();
            vector<int>great(n,0);
            stack<int>st;          // store indices

            for(int i=0; i<n; i++)
            {
                while(!st.empty() && res[i] > res[st.top()])
                {
                    great[st.top()] = res[i];
                    st.pop();
                }
                st.push(i);
            }
            return great;
    }
};
