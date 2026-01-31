
class Solution {
  public:
    long long noOfDigits(int N) {
        if (N == 0 || N == 1) return 1; 
        double phi = (1 + sqrt(5)) / 2.0;
        long long digits = floor(N * log10(phi) - log10(sqrt(5))) + 1;
        return digits;
    }

};
