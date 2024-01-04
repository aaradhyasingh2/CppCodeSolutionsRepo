#include<iostream>
using namespace std;

bool linearSearch(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
 
int main()
{
    int n;
    cout<<"Enter value: ";
    cin>>n;

    int arr[n];
    cout<<"enter number: "; //taking input in array from users
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"enter key to search in array: ";
    cin>>key;
    
    bool found = linearSearch(arr,n,key);
    if(found){
        cout<<"key is present";
    }
    else{
        cout<<"key is not present";
    }
   return 0;
}
