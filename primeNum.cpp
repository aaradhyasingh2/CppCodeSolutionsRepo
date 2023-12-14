# Write a program to print a prime number.

#code -

#include <iostream>
using namespace std;

bool isnumberPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;

    if (isnumberPrime(n))
    {
        cout << "number is prime";
    }
    else
    {
        cout << "number is not prime";
    }
    return 0;
}
