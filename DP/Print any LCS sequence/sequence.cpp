#include <vector>
#include <iostream>
#include <string.h>
#include<algorithm>
using namespace std;

vector<vector<int>> LCS(const string &X, const string &Y, int m, int n) {
    vector<vector<int>> dp(m+1, vector<int>(n+1));

	// second string zero first string kuch bhi
	for(int i=0; i<=m; i++)
		dp[i][0] = 0;
	// first string zero, second string kuch bhi
	for(int i=0; i<=n; i++)
		dp[0][i] = 0;

	for(int i=1; i<=m; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(X[i-1] == Y[j-1])
				dp[i][j] = 1 + dp[i-1][j-1];
			else
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp;
}

string printLCS(const string &X, const string &Y, const vector<vector<int>> &dp)
{
    int i=X.size();
    int j=Y.size();
    string res = "";
    
    while(i>0 && j>0)
    {
        if(X[i-1]==Y[j-1])
        {
            res.push_back(X[i-1]);
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1])
            i--;
        else
            j--;
    }
    return res;
}

int main()
{
	string X = "abcde";
	string Y = "bdekg";
	int m = X.size();
	int n = Y.size();

  auto dp = LCS(X,Y,m,n);

  string result = printLCS(X,Y,dp);
  reverse(result.begin(),result.end());
  cout<<"Print LCS: "<<result;
  
	return 0;
}
