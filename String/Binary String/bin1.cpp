/* TC : O(N)
The idea is to count '1's in the string. The thought process is that for every pair of '1's, one valid substring can be formed. So, if there are m '1's, 
then the total number of such pairs is m × (m - 1) / 2, which gives us the count of valid substrings. 

Why m × (m - 1) / 2?

Suppose there are m occurrences of '1' in the string.
To form a valid substring, we need to pick two different positions where '1' appears — one as the start and one as the end.
The number of ways to choose 2 different '1's from m positions is the combinatorial formula:
m × (m - 1) / 2, which is nC2 (number of ways to choose 2 elements from m).
Each such pair (i, j) where i < j gives a unique substring that starts and ends with '1'.
 */ 
class Solution {
  public:
    int binarySubstring(string& s) {
        // code here
        
        int n = s.length();
        int count;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                count++;
        }
        
        return count*(count-1)/2;
    }
};
