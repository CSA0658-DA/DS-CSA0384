#include<stdio.h>
int main()
{ int i,first,last,mid,n,A[n],key;
  printf("enter the size of array : ");
 scanf("%d",&n);
 for (i=0;i<n;i++)
  scanf("%d",&A[i]);
  printf("enter the number to found : ");
  scanf("%d",&key);
  first=0;
  last=n-1;
  mid=(first+last)/2;
  while (first<=last)
  { if ( A[mid]<key )
    first=mid+1;
    else if (A[mid]==key )
    {  printf(" %d is found at postion %d ",key,mid+1);
    break;
	}
	 else 
	 last =mid-1;
	 mid = (first+last)/2;
      }
      if (first >last)
      printf(" %d is not found  ",key);
      return 0;
}
