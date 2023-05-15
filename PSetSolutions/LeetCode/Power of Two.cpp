class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (!n || n < 0)
            return 0;
        return (n & (n - 1)) == 0;
    }
    // this obsevation
    // 16 = 10000
    // 15 = 01111

    // if (n < 0)
         // return 0;
    // return __builtin_popcount(n) == 1;
};
