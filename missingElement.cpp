problem - find missing element of AP in array.

solution - 
#include <bits/stdc++.h>
using namespace std;


int findMissing(int arr[], int n)
{
    int d = (arr[n - 1] - arr[0]) / n; // calculate the common difference
    int left = 0, right = n - 1;       // left(start) and right(end)
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid + 1] - arr[mid] != d)
        {
            return arr[mid] + d; // missing element found
        }
        else if (mid > 0 && arr[mid] - arr[mid - 1] != d)
        {
            return arr[mid - 1] + d; // missing element found
        }
        else if (arr[mid] == arr[0] + mid * d)
        {
            left = mid + 1; // search right half
        }
        else
        {
            right = mid - 1; // search left half
        }
    }
    return -1; // no missing element found
}

int main()
{
    int arr[] = {1, 6, 11, 16, 21, 31}; // given AP
    int n = sizeof(arr) / sizeof(arr[0]);
    int missing = findMissing(arr, n);
    if (missing != -1)
    {
        cout << "The missing element in the AP is: " << missing << endl;
    }
    else
    {
        cout << "No missing element found in the AP" << endl;
    }
    return 0;
}
