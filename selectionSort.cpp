#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex]) //<-- sort in increasing order
                                        //(sort in decreasing order --> if(arr[j] > arr[minIndex]))
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    // taking input from users
    int n;
    cout << "enter value: ";
    cin >> n;

    int a[n];
    cout << "enter number: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    selectionSort(a, n);
    cout << "after sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
