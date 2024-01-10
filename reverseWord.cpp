#include<iostream>
using namespace std;

void reverseString(char ch[],int n){
    int start = 0;
    int end = n-1;

    while (start <= end)
    {
        /* code */
        swap(ch[start] , ch[end]);
        start++;
        end--;
    }   
}
 
int main()
{
    char ch[4];
    cin>>ch;
     reverseString(ch,4);
    cout<<"reverse String is: "<<ch;
   return 0;
}
