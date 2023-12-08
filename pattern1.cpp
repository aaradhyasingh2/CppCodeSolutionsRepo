#Pattern Question
#print below pattern:-

@
@
@
@******
@     ******
@          ******               @
@               ******          @
                     ******     @
                          ******@
                                @
                                @
                                @


#solution code:-

#include<iostream>
using namespace std;

int main(){
    int n=6;
    int x=0;
    for(int i=0;i<2*n;i++){
        bool flag=false;
        if(i<n+1)
        cout<<"@";
        else
        cout<<" ";
        for(int j=0;j<n*(n-1)+1;j++){
            if(i>=n/2 && i<2*n-n/2){
                if(j<(n-1)*x || j>(n-1)*x+n-1)
                cout<<" ";
                else
                cout<<"*";
                flag = true;
            }
            else cout<<" ";
        }
        if (flag)x++;
        if (i>=n-1)
        cout<<"@";
        else
        cout<<" ";
        cout<<endl;
    }
}
