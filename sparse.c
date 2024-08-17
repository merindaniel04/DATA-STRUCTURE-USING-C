#include<stdio.h>
void main()
{
int m,n,i,j,k=1;
int a[20][20],b[20][3];
printf("enter the rows and column of the matrix\n");
scanf("%d%d",&m,&n);
printf("enter the elements\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("the matrix is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("row\t colum\t value\n");
b[0][0]=i;
b[0][1]=j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]!=0)
{
b[k][0]=i;
b[k][1]=j;
b[k][2]=a[i][j];
k++;
}
}
}
b[0][2]=k-1;
for(i=0;i<k;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
}











