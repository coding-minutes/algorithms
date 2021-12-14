#include<iostream>
#include<queue>

using namespace std;

/*
    Program to find whether a given number is power of 2.
*/

bool checkPowerOf2(int n)
{
    if((n & (n-1)) == 0)
        return true;
    return false;
}