#Write a program for the pattern given below.

 @@@@@
   @@@ 
    @  
*****  
*   *  
*   *  
*   *  
*   *

#solution code - 
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    if (n < 1 || n % 2 == 0)
        return 0;
    // print triangle
    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
            cout << " ";
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < n - (2 * i); j++)
            cout << "@";
        cout << endl;
    }
    // print square
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
