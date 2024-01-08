#include <iostream>
using namespace std;

// using while loop

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

// using for loop

/*void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        for(;j>=0;j--){
            if(arr[j] > key){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = key;
    }
}*/

int main()
{
    int n;
    cout << "enter value";
    cin >> n;

    int a[n];
    cout << "enter number: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    insertionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
