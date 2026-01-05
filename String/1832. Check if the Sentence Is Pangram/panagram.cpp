class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.length();
        int count[26] = {0};

        for(int i=0;i<n;i++)
        {
            if(sentence[i]>='a' && sentence[i]<='z')
                count[sentence[i]-'a']++;
            else if(sentence[i]>='A' && sentence[i]<='Z')
                count[sentence[i]-'Z']++;
        }

        for(int i=0;i<26;i++)
            if(count[i]==0)
                return false;

        return true;
    }
};
