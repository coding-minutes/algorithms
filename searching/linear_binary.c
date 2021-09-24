// One Programme for linear and binary search..
//In Both searches -- array must be sorted!
#include<stdio.h>

//Structure Created.
struct Bin_Lin
{
    int arr[10];
    int length;
};
//Method for using linear search
int linear(struct Bin_Lin t,int key)
{
    for(int i=0;i<t.length;i++)
    {
        if(t.arr[i]==key)
        {
            return i+1;
        }
    }
    return -1;
}
//Method for Binary Search..
int bnary(struct Bin_Lin t,int key)
{
    int low,high,mid;
    low = 0;
    high = t.length-1;
    
    
    while(low<=high)
    {
        mid = (low+high)/2;
        if(key==t.arr[mid])
        {
            return mid+1;
        }
        else if(key < t.arr[mid] )
        {
            high = mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
}
int main()
{
    struct Bin_Lin a={{3,6,9,12,15,18,21,24,27,30},10};
    
    int choice,key;
    printf("0) Linear Search\n1) Binary Search");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    printf("Enter the element for checking the index :");
    scanf("%d",&key);
    if(choice==0)
    {
        // linear(a,key);
        printf("%d index",linear(a,key));
    }
    if(choice==1)
    {
        // bnary(a,key);
         printf("%d index",linear(a,key));
    }

    return 0;
}
