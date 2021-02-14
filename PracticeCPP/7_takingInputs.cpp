//Taking string input from user
#include <iostream>
using namespace std;
int main()
{
    //cin.get() doesn't ignore whitespaces
    int i = 0;
    char a[1000], ch;
    ch = cin.get();
    while (ch != '\n')
    {
        a[i] = ch;
        i++;
        ch = cin.get();
    }
    a[i] = '\0';
    cout << "Chars: " << a << " Counts: " << i;

    return 0;
}