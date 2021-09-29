#include <iostream>
using namespace std;

// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping 
// the adjacent elements if they are in wrong order.

void bubbleSort(int a[], int n)
{
    int flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break; // that means the array was already sorted
        }
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
    bubbleSort(arr, n);
    cout << "\n After Sorting: \n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i] << " ";
    }
    return 0;
}