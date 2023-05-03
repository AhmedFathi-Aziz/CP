#include <bits/stdc++.h>
using namespace std;
#define ll long long

int maxi(int*, int n);
int mini(int*, int n);
int primes(int*, int n);
int palindromes(int*, int n);
int number(int*, int n);

void doWork() {
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    cout << "The maximum number : " << maxi(a, n) << endl;
    cout << "The minimum number : " << mini(a, n) << endl;
    cout << "The number of prime numbers : " << primes(a, n) << endl;
    cout << "The number of palindrome numbers : " << palindromes(a, n) << endl;
    cout << "The number that has the maximum number of divisors : " << number(a, n) << endl;
    delete []a;
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

int maxi(int *a, int n) {
    int out = 0;
    for (int i = 0; i < n; i++)
        out = max(out, a[i]);
    return out;
}

int mini(int *a, int n) {
    int out = 100;
    for (int i = 0; i < n; i++)
        out = min(out, a[i]);
    return out;
}

int primes(int *a, int n) {
    int out = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) continue;
        bool prime = true;

        for (int j = 2; j * j <= a[i]; j++) {
            if (a[i] % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime)
            out++;
    }
    return out;
}

int palindromes(int *a, int n) {
    int out = 0;
    for (int i = 0; i < n; i++) {
        int num = a[i];
        int rev = 0;
        while (num > 0) {
            rev = rev * 10;
            rev += num % 10;
            num /= 10;
        }
        if (a[i] == rev)
            out++;
    }
    return out;
}

int number(int *a, int n) {
    int num = 0, divi = 0;
    for (int i = 0; i < n; i++) {
        int div = 0;
        for (int j = 1; j <= a[i]; j++)
            if (a[i] % j == 0)
                div++;
        if (div > divi)
            divi = div, num = a[i];
        else if (div == divi && a[i] > num)
            num = a[i];
    }
    return num;
}
