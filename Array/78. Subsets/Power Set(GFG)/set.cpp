class Solution {
  public:
  
    void generate(string &s, int index, string curr, vector<string> &subset)
    {
        if(index==s.size())
        {
            if(!curr.empty())
                subset.push_back(curr);
            return;
        }
        
        //include the alphabet of string
        curr.push_back(s[index]);
        generate(s,index+1,curr,subset);
        
        //exclude the alphabet
        curr.pop_back();
        generate(s,index+1,curr,subset);
    }
    
    vector<string> AllPossibleStrings(string s) {
        // Code here
        int n = s.size();
        
        vector<string>subset;
        generate(s,0,"",subset);
        sort(subset.begin(),subset.end());
        
        return subset;
    }
};
