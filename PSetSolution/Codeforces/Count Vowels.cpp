#include <bits/stdc++.h>
using namespace std;

bool vowel(char c) {
    return c == 'a' || c == 'i' ||
    c == 'e' || c == 'o' || c == 'u';
}
void print(string a, int &count, int i = 0) {
    if (i == a.size())
        return void();
    if (vowel(tolower(a[i])))
        count++;
    print(a, count, i + 1);
}

int main() {
    string a;
    getline(cin, a);
    int count = 0;
    print(a, count);
    cout << count << '\n';
    return 0;
}
