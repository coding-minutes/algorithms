#include <iostream>
using namespace std;

void printArray(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int *arr, int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortAdaptive(int *arr, int length)
{
    int isSorted = 0;
    for (int i = 0; i < length - 1; i++)
    {
        isSorted = 1;
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{
    int arr[] = {12, 54, 65, 7, 23, 9};
    int length = sizeof(arr) / sizeof(int);
    printArray(arr, length);
    bubbleSortAdaptive(arr, length);
    printArray(arr, length);

    return 0;
}
