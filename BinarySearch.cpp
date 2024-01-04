#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
   int start = 0;
   int end = n - 1;

   int mid = start + (end - start) / 2;
   while (start <= end)
   {
      if (arr[mid] == key)
      {
         return mid;
      }

      // go to right part
      if (key > arr[mid])
      {
         start = mid + 1;
      }
      else
      { // (key < arr[mid])
         end = mid - 1;
      }
      mid = start + (end - start) / 2;
   }
   return -1;
}

int main()
{

   int n;
   cout << "enter value: ";
   cin >> n;

   int arr[n];
   cout << "Enter numbers: ";
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   int key;
   cout << "enter key for searching: ";
   cin >> key;
   
   int Index = binarySearch(arr,n,key);
   cout << "Index of searching key: " << Index << endl;

   return 0;
}
