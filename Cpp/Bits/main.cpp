#include <bits/stdc++.h>
using namespace std;

constexpr int N = 32;

int main() {
    // unsigned int n;
    // cin >> n;
    // cout << __builtin_popcount(n) << endl;

    // long long m;
    // cin >> m;
    // cout << __builtin_popcountll(m) << endl;

    unsigned int n = 10;
    

    // bitset<N> bit(n);
    // cout << bit.count() << endl; // number of ones
    // for (int i = 31; i >= 0; i--)
    //     cout << bit[i];

    for (int i = 31; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }
    
    return 0;
}



/*

    unsigned int n;

    count trainling zeros [from right]
    000110100
    __builtin_ctz(n) = 2


    count leading zeros [from left]
    01101010100
    __builtin_clz(n) = 1



    LSB -> Least significant bit
    0100010101
             ^
    0000000100
           ^
    LSB = 1


    10 Decimal =  00001010 B
                             &
    -10 Decimal = 11110110 B
                  00000010 B  
    LSB -> 00000010 B
    LSB = n & (-n)





    1 D = 0001 B

    1 << 3
          0001 << 3
                   1000
                       2 power 3


    1 << 2
          0001 << 1 = 0010
          0010 << 1 = 0100
                          2 power 2
    shifts the binary digits to the left by the specified number of places




    4 >> 2
          0100 >> 2
                   0001
                       4 divide 4
    each shift to the right divides the number by 2



    set the bit in position 3 to 1
    n |= (1 << 3)
          01000

    set the bit in position 3 to 0
    n &= ~(1 << 3)
           10111


    the initial value for and operation is -1
        ~0 -> 11111111

*/