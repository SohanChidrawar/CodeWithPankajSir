// using build in function

class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = num1.length();
        int m = num2.length();

        int nums1 = stoi(num1);
        int nums2 = stoi(num2);

        int num3 = nums1+nums2;
        string str = std::to_string(num3);

        return str;
    }
};
