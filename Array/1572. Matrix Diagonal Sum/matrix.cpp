class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int len = n-1;
        int result = 0;
        for(int i=0;i<=len;i++)
        {
            result += mat[i][i];
            if(i != (len-i))
                result += mat[i][len-i];
        }
        return result;
    }
};
