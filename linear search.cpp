#include<stdio.h>
int main()
{ int i,n,A[n],key;
  printf("enter the size of array : ");
 scanf("%d",&n);
 for (i=0;i<n;i++)
  scanf("%d",&A[i]);
  printf("enter the number to found : ");
  scanf("%d",&key);
  for (i=0;i<n;i++)
   if ( A[i]== key)
    break;      
	if (i< n )
	printf(" %d is found ",key);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
	else 
	printf(" %d is not found");
	return 0;
}
