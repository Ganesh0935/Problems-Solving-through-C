#include <stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10];
int m,n,p,q,i,j,k;
printf("Enter no of rows and columns of 1matrix:"); 
scanf("%d%d",&m,&n);
printf("Enter no of rows and columns of 2matrix:");
scanf("%d%d",&p,&q);
if(n==p)
{
//
printf("Enter elements of first matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}

printf("Enter elements of second matrix\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
scanf("%d",&b[i][j]);
}
//
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
//
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
 printf("can't Multiply\n");
return 0;
}
