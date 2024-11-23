#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n, m;
    cin >> n >> m;
    
    unordered_map<string, int> mp;
    string in;
    string out;
    while (n--) {
        cin >> in;
        for (int i = 0; i < in.length(); i++) {
            out = "";
            for (int j = 0; j <= i; j++) {
                out += in[j];
            }
            ++mp[out];
        }
    }
    while (m--) {
        cin >> in;
        cout << mp[in] << "\n";
    }
    
    return 0;
}
