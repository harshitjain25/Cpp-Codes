// 1
// 21
// 321
// 4321
// 54321
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "\n";
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
    }
    return 0;
}