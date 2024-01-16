#include<iostream>
using namespace std;
 
int main()
{
    //1st method
    
    // string str = "nehasingh";
    // for(int i=0;i<str.length();i++){
    //     cout<<str[i];
    // }
    // cout<<endl;


    //2nd method
    string str = "geeksforgeeks";
    for(char x:str){
        cout<<x;
    }
   return 0;
}
