/*
In C++, std::string::npos is a special constant used to represent an "invalid" or "not found" position within a string. 
Key Characteristics
Meaning: It stands for "no position".
Value: It is defined as a static const size_t with the value -1. Because size_t is an unsigned integer type, -1 wraps around to the maximum possible value that a size_t can hold (e.g., 18,446,744,073,709,551,615 on a 64-bit system).
Usage: It is primarily used to check if a search function (like .find()) failed to find a match. 
*/

class Solution {
public:
    bool checkOnesSegment(string s) {
        // int n = s.length();
        
        return s.find("01") == string::npos;
    }
};
