#include <iostream>
#include <vector>
using namespace std;
#define ll long long

bool prime(int n)
{
    if (n == 1 || n % 2 == 0)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}


int main()
{
    int number1, number2; 
    cin >> number1 >> number2;

    if (!prime(number2))
    {
        cout << "NO" << endl;
        return 0;
    }

    vector <int> primes;
    for (int i = 2; i <= 50; i++)
    {
        if (prime(i))
            primes.push_back(i);
    }
    
    int answer = 0;
    for (int i = number1 + 1; i <= 50; i++)
    {
        if (prime(i))
        {
            answer = i;
            break;
        }
    }
    if (answer == number2) cout << "YES" << endl;
    else cout << "NO" << endl;
}
