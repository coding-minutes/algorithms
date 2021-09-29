#include <iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int x = a[i];
        while (j > -1 && a[j] > x)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
    // Time Complexity : O(n*n) for average and worst case while O(n) for the best case
    // Best case means the array was already sorted
}

int main()
{
    int n;
    cout << "\n Please enter the no. of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "\n Please enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    cout << "\n After Sorting: \n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }
    return 0;
}