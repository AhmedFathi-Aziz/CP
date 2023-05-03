#include <iostream>
using namespace std;

int main()
{
    // int length, distinct;
    // cin >> length >> distinct;

    // string password;
    // int in = distinct;
    // while (password.length() < length)
    // {
    //     password += char('`' + in);
    //     in--;
    //     if (in == 0)
    //         in = distinct;
    // }
    // cout << password << endl;

    int n, in;
    cin >> n >> in;

    for (int i = 0; i < n; i++)
        cout << char('a' + i % in);
}