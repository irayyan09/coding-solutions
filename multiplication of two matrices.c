#include<stdio.h>
void main()
{
     int A[3][3],i,j,z=0,nz=0;
     printf("enter 9 elements for A matrix");

      for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
          scanf("%d",&A[i][j]);
          if(A[i][j]==0)
           z++;
           else
           nz++;
      }
      if(z>nz)
      printf("sparse matrix");
      else
      printf("not a sparse matrix");
}







