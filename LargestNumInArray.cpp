#Find largest number in the array..

code:- 
  
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int LargestNumber(int arr[], int n)
{

   int min = arr[0];
   for (int i = 1; i < n; i++)
   {
      if (max < arr[i])
      {
         max = arr[i];
      }
   }
   return max;
}
int main()
{
   int arr1[] = {2, 5, 1, 3, 0};
   int n = 5;
   int max = LargestNumber(arr1, n);
   cout << "The largest number in the array is: " << max << endl;
  
   return 0;
}
