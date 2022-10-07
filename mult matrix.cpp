#include<stdio.h>
int main()
 { int A[50][50],B[50][50],mul[50][50],i,j,r,c,k;
    printf("enter the no of rows :");
    scanf("%d",&r);
    printf("enter the no of colomuns :");
    scanf("%d",&c);
    printf(" Enter the elements of first matrix :\n ");
  for (i=0;i<r;i++)
     { for (j=0;j<c;j++)
      {
	    scanf("%d",&A[i][j]);
       }
     }
 
       printf(" \nEnter the elements of second matrix: \n ");
  for (i=0;i<r;i++)
     { for (j=0;j<c;j++)
      {
	    scanf("%d",&B[i][j]);
       }
     }
  
    for (i=0;i<r;i++)
    { for (j=0;j<c;j++) 
      { mul[i][j]=0;
        for (k=0;k<c;k++)
        { mul[i][j]+=A[i][k]*B[k][j];
		}
	  }
	}
	 printf("\n The multipul matrix is :\n");
	  for ( i=0;i<r;i++)
	  { for (j=0;j<c;j++)
	    { printf("%d\t",mul[i][j]);
		}
		printf("\n");
	  }
	  return 0;
 }
