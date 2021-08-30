#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, int s, int m, int e) {
    int temp[e];
    int i = s, j = m + 1, k = s;
    while (i <= m and j <= e) {
        if (a[i] < a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
        }
    }
    while (i <= m) {
        temp[k++] = a[i++];
    }
    while (j <= e) {
        temp[k++] = a[j++];
    }
    for (int i = s; i <= e; i++) {
        a[i] = temp[i];
    }
}
void mergeSort(vector<int> &a, int s, int e) {
    if (s >= e)
        return;
    int m = (s + e) / 2;
    mergeSort(a, s, m );
    mergeSort(a, m + 1, e);
    merge(a, s, m, e);
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
    mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;

}

