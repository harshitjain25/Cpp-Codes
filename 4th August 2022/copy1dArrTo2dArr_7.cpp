// 1 - d Array 4 1 2 6 
// 2 - d Array // 4  0  0  4 
               // 0  1  1  0
               // 0  2  2  0
               // 6  0  0  6 
// 1 - d Array 1 2 3 4 5                
//  2 - d Array       1 0 0 0 1 
//                    0 2 0 2 0 
//                    0 0 3 0 0 
//                    0 4 0 4 0 
//                    5 0 0 0 5
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of 1d Array:";
    cin >> n;
    int a[n], b[10][10] = {0};
    cout << "Enter elements of Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j || i+j == n-1)
            {
                b[i][j] = a[i];
            }
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\n";

        for (int j = 0; j < n; j++)
        {
            cout << b[i][j]<<" ";
        }
    }
    return 0;
}