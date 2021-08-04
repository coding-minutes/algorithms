#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 2, 1, 10, 9};
    bool flag = false;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 2)
        {
            cout << "Found";
            flag = true;
        }
    }
    if (!flag)
    {
        cout << "Not Found";
    }

    return 0;
}