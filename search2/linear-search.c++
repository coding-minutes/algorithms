// Cpp for linear search_ Shogun
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element is found at index : ";
            cout << i;
        }
    }
}

int main()
{
    int n, key;
    int arr[100];
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Enter the elements in the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        /* code */
    }
    cout << "Enter the Elements to be Searched in the array : ";
    cin >> key;
    linearsearch(arr, n, key);
}
