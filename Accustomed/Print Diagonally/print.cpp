/*
The idea is to use the value of i + j, since elements with the same value lie on the same diagonal. We create a temporary array of arrays and 
store same diagonal elements at one place using (i+j) as index. Finally iterate over the temporary array to print the items diagonally.
*/

class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        // code here
        int n = mat.size();
        vector<vector<int>> result(2*n-1);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                result[i+j].push_back(mat[i][j]);
        }
        
        // flatten the result
        vector<int>output;
        for(int d=0;d<2*n-1;d++)
        {
            for(int val:result[d])
                output.push_back(val);
        }
        return output;
    }
};
