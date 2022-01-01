// Implementing binary search in C++

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size -1;
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;
}
    
int main()
{
    int arr[] = {1,2, 14, 19, 23, 34, 45, 56, 67, 78, 90};
    int size = sizeof(arr)/sizeof(int);
    int element;
    cout<<"Enter the element you want to search : ";
    cin>>element;

    int index = binarySearch(arr, size, element);
    cout<<"The element "<<element<<" is found at index "<<index;
    
    return 0;
}