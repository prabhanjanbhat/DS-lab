//Implement a C program to perform a binary search on a sorted array with a user defined fuction.
#include <stdio.h>
void binary(int arr[10],int n)
{  int beg=0,end=n-1,mid,num,found=0;
    printf("\n Enter the num to be searched");
    scanf("%d",&num);
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(arr[mid]==num)
        {    found=1;
            printf("%d id found in position %d",num,mid+1);
            break;
        }
        if(arr[mid]>num)
        {
            end=mid-1;
        }
        else
            beg=mid+1;
    }
 if(found==0)
 {
     printf("\n %d is not found in the array",num);
 }
}
 void main()
{

int arr[10], num, i, n, pos = -1, beg, end, mid,
found =0;

printf("\n Enter the number of elements in the array: ");

scanf("%d", &n);

printf("\n Enter the elements: ");

for(i=0;i<n;i++)

{

scanf("%d", &arr[i]);

}

binary(arr,n);
return 0;
}
