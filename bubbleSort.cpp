#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
   for (int i = 1; i < n - 1; i++)
   {
      for (int j = 0; j < n - i; j++)
         if (arr[j] > arr[j + 1])
         {
            swap(arr[j], arr[j + 1]);
         }
   }
}

int main()
{
   int n;
   cout << "enter the value: ";
   cin >> n;

   int a[n];
   cout << "enter number: ";
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
   }

   bubbleSort(a, n);
   for (int i = 0; i < n; i++)
   {
      cout << a[i] << " ";
   }
   return 0;
}
