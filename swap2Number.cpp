# swap two number using 3rd variable & without using 3rd variable

#code - 

//swap a number without using third variable
#include<iostream>
using namespace std;
 
int main()
{
    int a,b;
    cout<<"enter 1st number: ";
    cin>>a;

    cout<<"enter 2nd number: ";
    cin>>b;

    a = a+b;
    b = a-b;
    a = a-b;

    cout<<"after swaping number a is "<<a << " and b is " <<b;
   return 0;
}


//swaping using third variable.

// #include<iostream>
// using namespace std;
 
// int main()
// {
//     int a,b;
//     cout<<"enter number: ";
//     cin>>a;

//     cout<<"enter 2nd number: ";
//     cin>>b;

//     int temp = 0;

//     temp = a;
//     a = b;
//     b = temp;
    
//     cout<<"after swaping value of a is "<<a <<" and value of b is "<<b ;
//    return 0;
// }
