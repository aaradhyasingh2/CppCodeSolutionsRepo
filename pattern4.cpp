#pattern problem :-
            @
           @@@
          @@@@@
         @@@@@@@
     *
     *
     *
     *
     *
******

#solution code :- 

#include<iostream>
using namespace std;
 
int main()
{
    int n = 5;
    // cout<<"Enter number: ";
    // cin>>n;
    
    //@ print
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n+2;j++)
        cout<<" ";
        for(int j=0;j<n-i;j++)
        cout<<" ";
        for(int j=0;j<(2*i)+1;j++)
        cout<<"@";
        cout<<endl;
    }


    //star print
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++)
            if(i==n ||j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        cout<<endl;    
    }
   return 0;
}
