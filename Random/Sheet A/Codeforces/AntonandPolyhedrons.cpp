#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main()
{
    int cases; cin >> cases;
    
    string polyhedrons;
    int answer = 0;
    while (cases--)
    {
        cin >> polyhedrons;

        if (polyhedrons == "Icosahedron")
            answer += 20;
        else if (polyhedrons == "Cube")
            answer += 6;
        else if (polyhedrons == "Tetrahedron")
            answer += 4;
        else if (polyhedrons == "Dodecahedron")
            answer += 12;
        else answer += 8;    
    }
    cout << answer << endl;
}
