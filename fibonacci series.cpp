#include<stdio.h>
int main()
{ int n1=0,n2=1,nextterm,i,n;
  printf("enter the value of n : ");
   scanf(" %d",&n);
    printf(" The fibonacci series is : \n ");
     printf("\n %d %d ",n1,n2);
     for (i=2; i<n ;i++)
    {
	 nextterm=n1+n2;
     printf(" %d ",nextterm);
     n1=n2;
     n2=nextterm;
     }
     return 0;
     
}
