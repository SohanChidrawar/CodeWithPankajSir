/*
Intuition
When looking at the matrix, the elements are grouped diagonally. If we carefully observe, every diagonal can be uniquely identified by the sum of 
its row and column indices (row + col).
To traverse in the required zig-zag (up-right and down-left) pattern, we alternate directions based on whether (row + col) is even or odd.
If (row + col) is even → we move up-right.

If (row + col) is odd → we move down-left.

By following these simple movement rules and handling boundary conditions (top row, bottom row, leftmost column, rightmost column), we can cover the entire 
matrix in diagonal order.

Approach
Initialization:

Get the dimensions of the matrix m x n.
Prepare an output array of size m * n to store the traversal.
Start from the top-left cell (row = 0, col = 0).
Traversal Rule:

For each step, add the current element to the result.
The direction of movement depends on the sum of indices (row + col):
Even sum → move up-right (row--, col++).
Odd sum → move down-left (row++, col--).
Boundary Conditions:

While moving up-right:

If we are at the last column, move down (row++).
Else if we are at the first row, move right (col++).
While moving down-left:

If we are at the last row, move right (col++).
Else if we are at the first column, move down (row++).
Repeat until all m * n elements are filled in the result array.


*/

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<int>result(m*n);
        int row = 0, col = 0;

        for(int i=0;i<m*n;i++)
        {
            result[i] = mat[row][col];

            if((row+col)%2 == 0)
            {
                if(col == n-1)
                    row++;
                else if(row == 0)
                    col++;
                else
                {
                    row--;
                    col++;
                }
            }
            else
            {
                if(row == m-1)
                    col++;
                else if(col == 0)
                    row++;
                else
                {
                    row++;
                    col--;
                }
            }
        }
        return result;
    }
};
