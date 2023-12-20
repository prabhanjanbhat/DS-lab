//Write a C program to search for a specific element in an array using linear search with a user defined function.
#include<stdio.h>
void linear(int n,int arr[10])
{
    int val,found=0;
    printf("\nEnter the num to be searched");
    scanf("%d",&val);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==val)
        {   found=1;
            printf("\nNumber is found in position %d",i+1);
            break;
        }
    }
if(found==0)
{
    printf("\nNumber is not present in the array");
}
}
void main()
{
    int n,arr[10];
    printf("enter the size:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    linear(n,arr);
    return 0;
}
