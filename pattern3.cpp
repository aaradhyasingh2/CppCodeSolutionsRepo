# Write a program for the pattern given below.

*    
**    *
********
**    *
*    

# Solution code -

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < n / 2 && j <= i || i > n / 2 && j < n - i || i == n / 2)
                cout << "*";
            else
                cout << " ";
        }
        if (i == n / 2 - 1 || i == n / 2 + 1)
            cout << "*";
        if (i == n / 2)
            cout << "***";
        cout << endl;
    }
}
