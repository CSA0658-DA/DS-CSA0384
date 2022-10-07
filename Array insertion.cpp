 #include<stdio.h>
 int main()
 { int n,A[n],pos,ele,i;
 printf("enter the size of array : ");
 scanf("%d",&n);
 
 for (i=0;i<n;i++)
 { scanf("%d",&A[i]);
 }
 printf(" enter the postion : ");
  scanf("%d",&pos);
  printf(" enter the element : ");
  scanf("%d",&ele);
  if (pos>n)
  printf(" invalid postion ");
   else 
   { 
   for ( i=n-1 ; i>=pos-1 ; i--)
    A[i+1] = A[i] ;
     A[pos-1]=ele;
     printf (" Array after insertion : ");
      for (i=0 ;i<=n; i++)
      printf("%d ",A[i]);
   }
   printf("\nenter the size of array : ");
 scanf("%d",&n);
 
 for (i=0;i<n;i++)
 { scanf("%d",&A[i]);
 }
   
    printf("enter the postion : ");
  scanf("%d",&pos);
  if (pos>=n+1)
  printf(" invalid postion ");
   else 
   { 
   for ( i=pos-1 ; i<n-1 ; i++)
    A[i] = A[i+1] ;
     printf (" Array after deletion: ");
      for (i=0 ;i<=n-1; i++)
      printf("%d ",A[i]);
   }
   return 0 ;
 }
