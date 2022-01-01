// Implementing linear search in C++

#include <iostream>
using namespace std;
    
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {12,21,32,41,52, 63, 76, 54, 23, 54, 27};
    int size = sizeof(arr)/sizeof(int);
    int element;
    cout<<"Enter the element you want to search : ";
    cin>>element;
    
    int index = linearSearch(arr, size, element);
    cout<<"The element "<<element<<" is found at index "<<index;
    
    return 0;
}