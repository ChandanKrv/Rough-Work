/*
Sample Input
5
Sample Output
1
11
202
3003
40004
*/
#include <iostream>
using namespace std;
int main()
{ //Done
    int n = 5;
    // cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 && j == 1)
                cout << 1;
            else if (j == 1 || j == i)
                cout
                    << i - 1;
            else
                cout << 0;
        }
        cout << endl;
    }
    return 0;
}