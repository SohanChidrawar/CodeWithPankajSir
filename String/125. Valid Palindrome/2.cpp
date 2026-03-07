class Solution {
public:
    bool isPalindrome(string s) {
        string palindrome;

        for(char ch : s)
        {
            if(isalnum(ch))
                palindrome += tolower(ch);
        }

        int left = 0;
        int right = palindrome.size()-1;

        while(left < right)
        {
            if(palindrome[left] != palindrome[right])
                return false;
            
            left++;
            right--;
        }

        return true;
    }
};
