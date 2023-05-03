#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n; cin >> n;
    char c;

    if (n < 26)
    {
        cout << "NO" << endl;
        return 0;
    }

    vector <bool> visit(26, false);
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c >= 'A' && c <= 'Z')
            c = (c - 'A') + 'a';

        visit[c - 'a'] = true; 
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (!visit[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}