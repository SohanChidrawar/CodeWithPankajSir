class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        auto bitcount = [](int x)
        {
            return __builtin_popcount(x);    // count number of 1's present
        };

        sort(arr.begin(),arr.end(), [&](int a, int b)
        {
            int ca = bitcount(a);
            int cb = bitcount(b);

            if(ca==cb) return a<b;           //tiebreakint: ascending order
            return ca < cb;
        });

        return arr;
    }
};
