#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &a, int s, int e) {
    int i = s - 1;
    int j = s;
    int pivot = a[e];
    for (; j < e; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[e]);
    return i + 1;

}

void quickSort(vector<int> &a, int s, int e) {
    if (s >= e)
        return;
    int p = partition(a, s, e);
    quickSort(a, s, p - 1);
    quickSort(a, p + 1, e);
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
  
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    quickSort(a, 0, n - 1);
  
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;

}
