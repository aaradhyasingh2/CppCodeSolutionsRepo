// check the given n digit number are armstrong or not.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, t1, temp, rem, lastdigit, count = 0, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    t1 = n;
    temp = n;
    while (n != 0)
    {
        lastdigit = n % 10;
        count = count + 1; // count++;
        n = n / 10;
    }
    while (t1 != 0)
    {
        rem = t1 % 10;

        // pow() returns a double value
        // round() returns the equivalent int
        sum = sum + round(pow(rem, count));
        t1 = t1 / 10;
    }
    if (temp == sum)
    {
        cout << "number is armstrong";
    }
    else
    {
        cout << "number is not armstrong";
    }

    return 0;
}

// program to check armstrong or not for only 3 digit number

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main()
// {
//     int n,sum=0;
//     cout<<"enter number: ";
//     cin>>n;

//     int temp = n;
//     while (n!=0)
//     {
//         int rem = n%10; //rem -  to get a lastdigit
//         // sum  = sum + rem*rem*rem;
//         sum += pow(rem,3);

//         n=n/10;
//     }
//     if(temp==sum){
//         cout<<"Number is Armstrong";
//     }
//     else{
//         cout<<"number is not armstrong";
//     }
//    return 0;
// }
