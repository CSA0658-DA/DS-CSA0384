#include<stdio.h>
int main()
{  int n1=0, n2=1, i, n, sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series:");
    for(i=0 ; i<n ; i++)
   {
        if(i <= 1)
   {  sum=i;
    }
     else
     { 
        sum=n1 + n2;
         n1=n2;
          n2=sum;
      }   
       printf(" %d",sum);
}
    return 0;
}
