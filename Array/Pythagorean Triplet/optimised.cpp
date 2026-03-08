class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
      
        int n = arr.size();
        unordered_set<int> s(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int a = arr[i]*arr[i];
                int b = arr[j]*arr[j];
                int c1 = a+b;
                int c = (int)sqrt(c1);
                
                // check if perfect square and c exist in array
                if(c*c == c1 && s.count(c))
                    return true;
            }
        }
        return false;
    }
};
