// program to calculate number of set bits in binary representation of a an unsigned int.

// time compexity : O(no. of set bits in binary representation of a number)
// auxilliary space : O(1)

#include<bits/stdc++.h>
using namespace std;

int countBits(unsigned int n)
{
    int res = 0;
    while(n>0)
    {
        n = (n & (n-1));
        res++;
    }
    return res;
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << countBits(n);
    return 0;

}