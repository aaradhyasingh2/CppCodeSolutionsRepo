# Reverse Array

#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
   int start = 0, end = n - 1;
   while (start <= end)
   {
      swap(arr[start], arr[end]);
      start++;
      end--;
   }
}

// void printArray(int arr[], int n){
//    for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//    }
//    cout<<endl;
// }

int main()
{
   // int n;
   // cout<<"enter value: ";
   // cin>>n;

   // int arr[n];

   // //taking input in array from user.
   // cout<<"enter number: "<<" ";
   // for(int i=0;i<n;i++){
   //    cin>>arr[i];
   // }

   int arr[5] = {1, 2, 3, 4, 5};
   reverse(arr, 5); // call reverse funtion

   // printing reverse array
   for (int i = 0; i < 5; i++)
   {
      cout << arr[i] << " ";
   }

   // int arr[6] = {1,4,3,5,7,2};
   // int brr[5] = {3,5,8,2,0};

   // reverse(arr,6);
   // printArray(arr,6);

   // reverse(brr,5);
   // printArray(brr,5);
   return 0;
}
