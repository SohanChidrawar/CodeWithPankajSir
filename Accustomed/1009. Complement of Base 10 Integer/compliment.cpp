class Solution {
public:
    int bitwiseComplement(int n) {
        vector<int>res;
        if(n==0)
            return 1;
        
        while(n>0)
        {
            int rem  = n%2;
            res.push_back(rem);
            n = n/2;
        }

        int m = res.size();
        for(int i=0;i<m;i++)
        {
            if(res[i] == 1)
                res[i] = 0;
            else
                res[i] = 1;
        }


        //reverse to get MSB first
        reverse(res.begin(),res.end());
        
        int sum = 0;
        for(int i=0;i<m;i++)
        {
            sum = sum*2+res[i];
        }

        return sum;
    }
};
