#include <iostream>
using namespace std;

class Array
{
private:
 int *A;
 int size;
 int length;

 public:
 Array()
 {
 size=10;
 length=0;
 A=new int[size];
 }
 Array(int sz)
 {
 size=sz;
 length=0;
 A=new int[size];
 }
 ~Array()
 {
 delete []A;
 }

 int BinarySearch(int key);

};

int Array::BinarySearch(int key)
{
 int l,mid,h;
 l=0;
 h=length-1;

 while(l<=h)
 {
 mid=(l+h)/2;
 if(key==A[mid])
 return mid;
 else if(key<A[mid])
 h=mid-1;
 else
 l=mid+1;
 }
 return -1;
}

int main()
{
 Array *arr1;
 int sz;
 int x,index;

 cout<<"Enter Size of Array";
 scanf("%d",&sz);
 arr1=new Array(sz);

 cout<<"Enter element to search";
 cin>>x;
 index=arr1->BinarySearch(x);
 cout<<"Element index "<<index;

 return 0;

}
