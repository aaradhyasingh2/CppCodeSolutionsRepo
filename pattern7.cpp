#write a program to print a number pattern
1   
22  
333 
4444
55555

#solution code - 

#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<i;
        }
        cout<<endl;
    }
   return 0;
}
