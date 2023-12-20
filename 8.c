//Create a program in C to search for the minimum and maximum elements in an array with a user defined function.
#include<stdio.h>
void maxmin(int a[10],int n)
{
    int max=a[0];
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("max is %d and min is %d",max,min);
}
void main()
{
    int n,a[10];
    printf("enter the size of array");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    maxmin(a,n);
    return 0;
}
