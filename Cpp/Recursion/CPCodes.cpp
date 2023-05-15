#include <iostream>
#include <math.h>
using namespace std;

int f1(int n) {
    return 1;
}

int f2(int n) {
    return n * f1(n- 1);
}

int f3(int n) {
    return n * f2(n - 1);
}

int f4(int n) {
    return n * f3(n - 1);
}

int f5(int n) {
    return n * f4(n - 1);
}

int F(int n) {
    if (n == 0)
        return 1;
    int out = n * F(n - 1);
    cout << n << '\n';
    return out;
}

void print(string a, int n, int i = 0) {
    if (i == n)
        return;
    print(a, n, i + 1);
    cout << a[i];
}

int out = 0;
int sum(int a[], int n, int i = 0) {
    if (i == n)
        return 0;
    sum(a, n, i + 1);
    out += a[i];
    return out;
}

int score(int *a, int n, int i = 0) {
    if (i == n)
        return 0;
    return a[i] + score(a, n, i + 1);
}

int power(int base, int p) { // O(p) * (1)
    if (!p)
        return 1;
    return base * power(base, p - 1);
}

int main() {
    cout << power(2, 4);

    cout << '\n';
    return 0;
}