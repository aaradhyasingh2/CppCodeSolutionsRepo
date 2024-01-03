problem - rotate the given array k time

solution -
#include <iostream>
using namespace std;

int main()
{
    int k;
    cout << "how many time array rotate: ";
    cin >> k;

    int n;
    cout << "enter the size of array: ";
    cin >> n;

    int a[n];
    cout << "enter the number: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = k; i < n; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < k; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
