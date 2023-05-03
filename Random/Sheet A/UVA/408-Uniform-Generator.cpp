#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int step, mod;

    int index = 0;
    while (cin >> step >> mod)
    {
        bool bad = false;
        vector <bool> visited(mod, false);
        for (int i = 0; i < mod; i++)
        {
            int random = (index + step) % mod;
            if (visited[random] == true)
            {
                bad = true;
                break;
            }
            visited[random] = true;
            index = random;
        }
        cout << setw(10) << step << setw(10) << mod << "    ";
        bad ? cout << "Bad Choice\n\n": cout << "Good Choice\n\n";
        // 8 Wrong Answer because 1 extra space
    }
}