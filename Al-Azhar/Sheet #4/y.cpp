#include <bits/stdc++.h>
using namespace std;
#define ll long long

int score[26];
int cost(char a, char b) {
    if (b == '?')
        return 0;
    return abs(score[a - 'a'] - score[b - 'a']);
}

void doWork() {
    string line;
    cin >> line;
    for (int i = 0; i < 26; i++)
        cin >> score[i];
    
    int n = line.length();
    int pos = line.find('?');
    while (pos != string::npos) {
        int ch = line.find_first_not_of('?', pos + 1);
        int len = 0;
        char a = '?', b = '?';

        if (pos == 0 && ch == string::npos)
            len = n;
        else if (ch == string::npos)
            len = n - pos;
        else len = ch - pos;

        if (ch != string::npos)
            b = line[ch];
        if (pos - 1 >= 0)
            a = line[pos - 1];
        
        int mini = INT_MAX;
        char rep = '?';
        for (char i = 'a'; i <= 'z'; i++) {
            int value = cost(i, a) + cost(i, b);
            if (value < mini) {
                mini = value;
                rep = i;
            }
        }
        line.replace(pos, len, len, rep);
        pos = line.find('?', pos + 1);
    }
    ll answer = 0;
    for (int i = 0; i < n - 1; i++)
        answer += (cost(line[i], line[i + 1]));
    cout << answer << endl << line << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifdef ONLINE_JUDGE
#endif
    int cases = 1;
    // cin >> cases;
    while (cases--)
        doWork();
    return 0;
}
