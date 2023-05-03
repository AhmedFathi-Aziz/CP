#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    int n;
    string s;
    cin >> n >> s;
    
    string out;
    while (!s.empty()) {
        if (s.back() == '0') {
            s.pop_back();
            int a = s.back() - '0';
            s.pop_back();
            a += (s.back() - '0') * 10;
            s.pop_back();

            out += char (a + 'a' - 1);
        } else {
            out += char ((s.back() - '0') + 'a' - 1);
            s.pop_back();
        }
    }
    reverse(out.begin(), out.end());
    cout << out << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases = 1;
    cin >> cases;
    while (cases--)
        doWork();
    return 0;
}
