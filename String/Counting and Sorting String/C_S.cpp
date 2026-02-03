class Solution {
  public:
    string countSort(string s) {
        // code here
        int n = s.length();
        string res = "";
        int arr[26] = {0};
        
        // count the frequency of each char
        for(int i=0;i<n;i++)
        {
            int m = s[i]-'a';
            arr[m] = arr[m]+1;
        }
        
        // building sorted string
        for(int i=0;i<26;i++)
        {
            if(arr[i] > 0)
            {
                for(int j=0;j<arr[i];j++)
                    res.push_back(i+'a');
            }
        }
        return res;
    }
};
