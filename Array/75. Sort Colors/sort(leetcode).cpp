class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int red = 0;
        int white = 0;
        int blue = 0;

        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
                red++;
            if(arr[i]==1)   
                white++;
            if(arr[i]==2)
                blue++;
        }
        for(int i=0;i<red;i++)
            arr[i]=0;
      
        for(int j=red;j < (red+white);j++)
            arr[j]=1;
      
        for(int k = (red+white);k < (red+white+blue);k++)
            arr[k]=2;
    }
};
