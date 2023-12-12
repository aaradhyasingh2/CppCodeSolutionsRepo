#include<iostream>
using namespace std;

int power(){
    int a,b;
    cout<<"enter two number: ";
    cin>>a>>b;
    int ans = 1;
    for(int i=1;i<=b;i++)
    {
        ans = ans*a;
    }
    return ans;
}


//second method

// int power(int num1, int num2){
//     int ans = 1;
//     for(int i=1;i<=num2;i++){
//         ans = ans*num1;
//     }
//     return ans;
// }
 
int main()
{
    int ans = power();
   cout<<ans<<endl;


//taking input for second method

//    int a, b;
//    cout<<"enter two number: ";
//    cin>>a>>b;

//    cout<<power(a,b)<<endl;
   return 0;
}
