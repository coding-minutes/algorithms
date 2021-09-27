// One Programme for linear and binary search..
//In Both searches -- array must be sorted!

#include<stdio.h>
#include<stdlib.h>

//Structure Created.
struct Bin_Lin
{
    int *arr;
    int size;
}a;

//Method for using linear search
int linear(struct Bin_Lin t,int key)
{
    for(int i=0;i<t.size;i++)
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
    high = t.size-1;
    
    
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
    int n,choice,key;
   
    printf("Enter the size of array where you want to store elements :\n");
    scanf("%d",&n);
    
    a.size=n;
    
    a.arr = (int *)malloc(n*sizeof(int));
    
    printf("Enter elements :\n");
    for (int i=0;i<a.size;i++)
    {
        scanf("%d",&a.arr[i]);
    }
    printf("\n");
    printf("Press 0 for Linear Search\nPress 1 for Binary Search");
    
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    
    printf("Enter the element for checking the index :");
    scanf("%d",&key);
    
    if(choice==0)
    {
        printf("%d index",linear(a,key));
    }
    else if(choice==1)
    {
        printf("%d index",linear(a,key));
    }
    else
    {
        printf("please select correct input !");
    }
    free(a.arr);
    return 0;
}