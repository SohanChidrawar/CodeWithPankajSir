class Solution {
public:

    void generate(int index, string digit, string output,string map[],vector<string>&ans)
    {
        //base case
        if(index==digit.size())
        {
            //cout<<output;
            ans.push_back(output);
            return;
        }

        int x = digit[index] - '2';
        string val = map[x];
        for(int i=0;i<val.size();i++)
        {
            generate(index+1,digit,output+val[i],map,ans);
        }
    }

    vector<string> letterCombinations(string digits) {
        string map[] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output = "";
        vector<string>ans;
        generate(0,digits,output,map,ans);
        return ans;

    }
};
