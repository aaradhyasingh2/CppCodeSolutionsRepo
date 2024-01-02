#find smallest number in array.

code - 

#include <iostream>
using namespace std;

int smallestNum(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {3, 1, 7, 9, 4, 3, 88};
    int n = 7;

    int ans = smallestNum(arr, 7);
    cout << ans;
}
