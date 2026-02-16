class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int index = 0;
        int minele = arr[0];
        for(int i=1;i<n;i++)
        {
            if(minele > arr[i])
            {
                minele = arr[i];
                index = i;
            }
        }
        
        return index;
    }
};
