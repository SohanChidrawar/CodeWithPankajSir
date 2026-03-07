class Solution {
public:
    string reverseWords(string s) {
        /*
        1) Split string into words
        2) reverse the word
        3) join back into single string with space
        */

        vector<string>words;
        string temp;

        // Extract word from string skipping space
        for(char ch : s)
        {
            if(ch == ' ')
            {
                if(!temp.empty())
                {
                    words.push_back(temp);
                    temp.clear();
                }
            }
            else
                temp.push_back(ch);
        }

        //push last word into word vector
        if(!temp.empty())
            words.push_back(temp);
        
        reverse(words.begin(),words.end());

        // join with single space
        string result;
        for(int i=0;i<words.size();i++)
        {
            if(i>0)
                result += ' ';
            result += words[i];
        }

        return result;

    }
};
