#Printing half pyramid using Alphabets
A 
A B 
A B C 
A B C D 
A B C D E 
A B C D E F

code:-
  
#include<bits/stdc++.h>
using namespace std;

int main(){
    int r;
    cin >> r;
    for( int i = 0; i < r; i++ ) {
        for( int j = 0; j <= i; j++ ){
            cout << (char)('A' + j) << " ";
        }
        cout<<endl;
    }

    return 0;
}
