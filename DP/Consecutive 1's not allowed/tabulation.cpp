/*
The idea is to fill the DP table based on next values. For each index, we can either place 1 or 0. The array is filled in an iterative manner from i = n-1 to i = 0.
*/

#include <iostream>
using namespace std;

int countStrings(int n) {
    if (n == 1)
        return 2;
    if (n == 2)
        return 3;

    vector<int> dp(n);
    dp[n - 1] = 2;
    dp[n - 2] = 3;

    for (int i = n - 3; i >= 0; i--) {
        dp[i] = dp[i + 1] + dp[i + 2];
    }

    return dp[0];
}

int main() {
  
    int n = 3;
    cout << countStrings(n);

    return 0;
}
