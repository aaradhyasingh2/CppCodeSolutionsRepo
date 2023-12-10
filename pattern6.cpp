#write a program to print below start pattern 
*
**
***
****
*****

#solution code -

#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
     for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
     }
   return 0;
}
