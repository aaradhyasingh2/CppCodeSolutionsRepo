#include<iostream>
using namespace std;

//function signature
void PrintCounting(int n){

    //function body
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
 
int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;

    //function calling
    PrintCounting(n);
   return 0;
}
