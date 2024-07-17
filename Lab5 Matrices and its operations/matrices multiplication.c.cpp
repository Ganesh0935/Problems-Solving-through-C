#include <stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10];
int m,n,p,q,i,j,k;
printf("Enter number of rows and columns of first matrix(between 1 and 10):"); 
scanf("%d%d",&m,&n);
printf("Enter number of rows and columns of second matrix(between 1 and 10):");
scanf("%d%d",&p,&q);
if(n==p)
{
/* Read the elements of first matrix */
printf("Enter elements of first matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
/* Read the elements of second matrix */
Print f("Enter elements of second matrix\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
scanf("%d",&b[i][j]);
}
/* Display A and B matrices */
printf("The Matrix A\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%3d",a[i][j]);
printf("\n");
}
printf("The Matrix B\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
printf("%3d",b[i][j]);
printf("\n");
}
/*multiply two matrices and print resultant matrix */
printf("The resultant matrix is\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0; 
for(k=0;k<p;k++)
c[i][j] += a[i][k]*b[k][j];
printf("%3d",c[i][j]);
}
printf("\n");
 }
}
else
 printf("Multiplication is not possible\n");
return 0;
}
