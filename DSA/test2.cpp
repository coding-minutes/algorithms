#include <iostream>
using namespace std;

int main()
{
    double *val = NULL;
    val = new double;
    *val = 38184.26;
    cout<<"Value is:"<<*val<<endl;
    delete val;
}