//Implement a C program to check if a given element is present in a 2D array with a user defined function.
#include<stdio.h>
#include<conio.h>
void search(int n,int m,int a[10][10])
{
  int num;
  printf("\n enter the number to be searched");
  scanf("%d",&num);
  for(int i=0;i<n;i++)
  {
     for(int j=0;j<m;j++)
     {
         if(num==a[i][j])
         { printf("\n the number is found in position %d %d",i+1,j+1);

         }
     }
  }
}
void main()
{
    int n,m,a[10][10];
    printf("enter the size of the array:");
    scanf("%d%d",&n,&m);
    printf("\nenter the elements:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
       {scanf("%d",&a[i][j]);}
    }
    search(n,m,a);

    return 0;
}
