#include<stdio.h>
int main()
{ int n,a[n],i,k;
  printf(" enter the valu of n :");
   scanf("%d",&n);
   printf(" enter the list of numbers : \n");
   for (i=1;i<=n;i++)
    scanf("%d",&a[i]);
    printf(" enter the number from list :  ");
    scanf("%d",&k);
    if ( k % 2 == 0)
     printf(" \n The number %d is even number",k);
     else 
      printf(" \n The number %d is odd number",k); 
      return 0;
}
