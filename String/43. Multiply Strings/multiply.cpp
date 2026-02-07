class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0")
            return "0";

        int len1 = num1.size();
        int len2 = num2.size();

        vector<int>res(len1+len2,0);

        // multiply each digit of num1 to each and every digit of num2

        for(int i=len1-1;i>=0;i--)
        {
            int digit1 = num1[i] - '0';

            for(int j=len2-1;j>=0;j--)
            {
                int digit2 = num2[j] - '0';

                res[i+j+1] += digit1 * digit2;
            }
        }

        // handling carrier from right to left
        for(int i = res.size()-1; i>0; i--)
        {
            res[i-1] += res[i]/10;
            res[i] %= 10;
        }

        // skip leading zero if any
        int startindex = res[0]==0 ? 1:0;

        //convert array into string
        string answer;
        for(int j = startindex; j < res.size(); j++)
            answer.push_back(res[j]+'0');

        return answer; 
    }
};
