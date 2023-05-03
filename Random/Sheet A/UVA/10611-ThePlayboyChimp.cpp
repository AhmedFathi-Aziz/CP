#include <iostream>
#include <vector>
using namespace std;

int up(vector <int> &heights, int key)
{
    int lower = 0;
    int upper = (int) heights.size() - 1;
    while (lower <= upper)
    {
        int mid = (lower + upper) / 2;
        if (heights[mid] <= key)
            lower = mid + 1;
        else if (heights[mid] > key)
            upper = mid - 1;    
    }

    if (lower >= heights.size()) return -1;
    return heights[lower];
}

int down(vector <int> &heights, int key)
{
    int lower = 0;
    int upper = (int) heights.size();
    while (lower <= upper)
    {
        int mid = (lower + upper) / 2;
        if (heights[mid] < key)
            lower = mid + 1;
        if (heights[mid] >= key)
            upper = mid - 1;    
    }

    if (upper < 0) return -1;
    return heights[upper];
}

int main()
{
    int n; cin >> n;
    vector <int> heights(n);
    for (int i = 0; i < n; i++)
        cin >> heights[i];

    int cases; cin >> cases;
    while (cases--)
    {
        int number; cin >> number;

        int first = down(heights, number);
        int second = up(heights, number);

        if (first == -1) cout << "X" << " ";
        else cout << first << " ";

        if (second == -1) cout << "X" << endl;
        else cout << second << endl;
    }    
}