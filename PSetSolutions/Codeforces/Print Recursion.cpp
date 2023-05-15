#include <iostream>
using namespace std;

void print(int n) {
    if (!n)
        return void();
    print(n - 1);
    cout << "I love Recursion" << '\n';
}

int main() {
    int n;
    cin >> n;
    print(n);
    return 0;
}
