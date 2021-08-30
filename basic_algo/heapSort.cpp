#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i) {

    int left = (i * 2) + 1, right = (i * 2) + 2;
    int largest = i;

    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void buildHeap(int arr[], int n) {

    for (int i = (n - 2) / 2; i >= 0; i--) {
        heapify(arr, n, i);
    }
}
void heapSort(int arr[], int n) {
    buildHeap(arr, n);
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif


    int n;
    cin >> n;
    int a[n];
   
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
   
    heapSort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;

}

