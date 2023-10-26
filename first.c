#include <stdio.h>
int main(void) {
int a[3][3],b[3][3],sum[3][3],A1,A2,A3,A4,A5,A6,A7,A8,A9;

printf("\nEnter elements of 1st matrix:\n");
  for (int i = 0; i < 3; ++i)
    {
      for (int j = 0; j < 3; ++j) 
      {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
      }
    }
   printf("Enter elements of 2nd matrix:\n");
  for (int i = 0; i < 3; ++i)
    {
      for (int j = 0; j < 3; ++j) 
      {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    
    }
  }

//printing matrices
printf("First matrix: \n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
printf(" %d ",a[i][j]);
}
printf("\n");

}
printf("Second matrix: \n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
printf(" %d ",b[i][j]);
}
printf("\n");

}
// printing the result
for (int i=0;i<3;i++)
{
  for (int j=0;j<3;j++)
    sum[i][j]=a[i][j]+b[i][j];
}

printf("\nSum of two matrices: \n");
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++) {
      printf("%d   ", sum[i][j]);
      }
      printf("\n");
    //adjoint of first matrix
    A1=(a[2][2]*a[3][3]-a[3][2]*a[2][3]);
    A2=(a[2][3]*a[3][1]-a[2][1]*a[3][3]);
    A3=(a[2][1]*a[3][2]-a[3][1]*a[2][2]);
    A4=(a[1][3]*a[3][2]-a[1][2]*a[3][3]);
    A5=(a[1][1]*a[3][3]-a[1][3]*a[3][1]);
    A6=(a[1][2]*a[3][1]-a[1][1]*a[3][2]);
    A7=(a[1][2]*a[2][3]-a[1][3]*a[2][2]);
    A8=(a[1][3]*a[2][1]-a[1][1]*a[2][3]);
    A9=(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
    printf("\nAdjoint of matrix A =\n\t%d\t%d\t%d\n\t%d\t%d\t%d\n\t%d\t%d\t%d",A1,A4,A7,A2,A5,A8,A3,A6,A9);

}