#include<stdio.h>
int main()
 {
  int a[10][10],i,j,n:
  printf("Enter the size/n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
     {
      scanf("%d",&a[i][j]);
     }
    }
  printf("The entered matrix is:\n");
   for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
     {
      printf("%d",&a[i][j]);
      }
    printf("\n");
    }
 return 0;
 }
