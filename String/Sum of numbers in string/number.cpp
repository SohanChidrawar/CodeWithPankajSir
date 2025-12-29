/* TC : O(N)
atoi() function :  Read the input string, skip any leading whitespace clear and then read digit unitil
it encounter a char that is not a part of its valid int number
 */

class Solution {
  public:
    int findSum(string& s) {
        // code here
        int n = s.length();
        string temp = "";
        int sum = 0;
        
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]))          // here instead of using inbuild function we can create our own number function checking through ascii value
                temp += s[i];
            else
            {
                sum += atoi(temp.c_str());
                
                temp = "";
            }
        }
        return sum + atoi(temp.c_str());
    }
};
