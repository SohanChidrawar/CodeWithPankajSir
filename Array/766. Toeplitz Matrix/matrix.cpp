/*
The core idea is to examine each cell, starting from the second row and second column. We compare each cell's value with its top-left neighbor. 
If a mismatch is found, the matrix is not Toeplitz, and we can stop. If the entire matrix is checked without any mismatches, all diagonals are constant.

Follow the below given steps:

Let n = mat.size() and m = mat[0].size().
Iterate i from 1 to n - 1 and within that j from 1 to m - 1.
If mat[i][j] != mat[i - 1][j - 1] at any point, return false.
Once all pairs have been checked with no mismatches, return true.
*/

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(matrix[i][j] != matrix[i-1][j-1])
                    return false;
            }
        }
        return true;
    }
};
