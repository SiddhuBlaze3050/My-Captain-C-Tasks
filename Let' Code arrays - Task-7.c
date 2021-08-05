#include <stdio.h>

void main()
{
    int ary[3][3];
	int i=0,j=0,sum1=0,sum2=0;
    printf("Input elements in the matrix :\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
	      printf("element-[%d],[%d]: ",i,j);
	      scanf("%d",&ary[i][j]);
      }
    }  
 
 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
    printf("\n");
    for(j=0;j<3;j++)
        printf("%d\t",ary[i][j]);
  }
 printf("\n\n");
  for(i=0;i<3;i++)
  {
  	sum1=sum1+ary[i][i];
  	sum2=sum2+ary[i][2-i];
  }
  printf("\nThe sum of diagonal elements in a matrix is : %d",sum1);
  printf("\nThe sum of other diagonal elements in a matrix is : %d",sum2);
}

