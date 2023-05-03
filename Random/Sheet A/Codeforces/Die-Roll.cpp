#include <iostream>
using namespace std;

int main()
{
    int yakko, wakko;
    cin >> yakko >> wakko;

    int numerator = 6 - max(yakko, wakko) + 1; 
    int denomerator = 6;

    if (numerator == 4)
        cout << 2 << "/" << 3 << endl;
    else if (numerator == 5)
        cout << 5 << "/" << 6 << endl;
    else        
    cout << numerator / numerator << "/" << denomerator / numerator << endl;
}
