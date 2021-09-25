// One Programme for linear and binary search..
//In Both searches -- array must be sorted!

#include<stdio.h>

//Structure Created.
struct Bin_Lin
{
    int arr[100];
    int size;
};

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
   
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    struct Bin_Lin a = {arr,n};
    for (int i=0;i<a.size;i++)
    {
        printf("%d",a.arr[i]);
    }
    printf("0) Linear Search\n1) Binary Search");
    
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    
    printf("Enter the element for checking the index :");
    scanf("%d",&key);
    
    if(choice==0)
    {
        
        printf("%d index",linear(a,key));
    }
    if(choice==1)
    {
         printf("%d index",linear(a,key));
    }

    return 0;
}
