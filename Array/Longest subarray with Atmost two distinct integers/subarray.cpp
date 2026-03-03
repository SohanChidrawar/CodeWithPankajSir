
class Solution {
  public:
    int totalElements(vector<int> &arr) {
    
        int n = arr.size();
        map<int,int>mp;
        int i=0,j=0;
        int size = 0;
        
        while(j<n)
        {
            mp[arr[j]]++;
            
            while(mp.size()>2)
            {
                mp[arr[i]]--;
            
                if(mp[arr[i]] == 0)
                    mp.erase(arr[i]);
                
                i++;
            }
            
            size = max(size, j-i+1);
            j++;
        }
        
        return size;

    }
};
