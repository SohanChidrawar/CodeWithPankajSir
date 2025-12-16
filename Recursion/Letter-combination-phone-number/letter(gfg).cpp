class Solution {
  public:
    
    void generate(int index, vector<int>& arr, string output, string map[], vector<string>&ans)
    {
        if(index==arr.size())
        {
            ans.push_back(output);
            return;
        }
        
        int x = arr[index];
        string val = map[x];
        if(val.size()==0 || val.size()==1)
        {
            generate(index+1,arr,output,map,ans);
        }
        else
        {
            for(int i=0;i<val.size();i++)
                generate(index+1,arr,output+val[i],map,ans);
        }
    }
  
    vector<string> possibleWords(vector<int> &arr) {
        // code here
        string map[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        string output = "";
        generate(0,arr,output,map,ans);
        return ans;
    }
};
