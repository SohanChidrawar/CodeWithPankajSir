class Solution {
public:
    vector<vector<int>> flipSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        // Loop only until the halfway point (k/2),
        // because we swap rows in pairs: top with bottom, second with second-last, etc.
        for (int i = 0; i < k / 2; i++) {
            // Calculate the indices of the current top and bottom rows to swap
            int topRow = x + i;
            int bottomRow = x + k - 1 - i;

            // Swap all elements in the current row segment (columns y to y+k-1)
            for (int j = 0; j < k; j++) {
                int col = y + j;
                // Swap the element in the top row with the corresponding element in the 
                // bottom row
                swap(grid[topRow][col], grid[bottomRow][col]);
            }
        }
        // Return the updated matrix after flipping the submatrix vertically
        return grid;
    }
};
