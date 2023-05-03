#include <bits/stdc++.h>
using namespace std;
#define ll long long

void doWork() {
    string s;
    cin >> s;
    vector<int> a[26];
    for (int i = 0; i < s.size(); i++)
        a[s[i] - 'a'].push_back(i + 1);
    
    vector<int> answer;
    char from = s.front(),
    to = s.back();
    if (from < to) {
        for (; from <= to; from++)
            for (int &i : a[from - 'a'])
                answer.push_back(i);
    } else {
        for (; from >= to; from--)
            for (int &i : a[from - 'a'])
                answer.push_back(i);
    }
    cout << abs(s.front() - s.back()) << ' ' << answer.size() << '\n';
    for (int &i : answer) cout << i << ' ';
    cout << '\n';
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
