#include<stdio.h>
void main()
{
int n,i,j,a[20],temp,t=0;
t++;
printf("enter the size of the array");
t++;
scanf("%d",&n);
t++;
printf("enter the elements in the array");
t++;
for(i=0;i<n;i++)
{
t++;
scanf("%d",&a[i]);
t++;
}
t++;
for(i=0;i<n;i++)
{
t++;
temp=a[i];
j=i-1;
while((j>=0)&&(a[j]>temp))
{
t++;
a[j+1]=a[j];
j--;
}
t++;
a[j+1]=temp;
}
t++;
printf("the sorted elements:\n");
t++;
for(i=0;i<n;i++)
{
t++;
printf("%d\t",a[i]);
}
t++;

printf("\nspace complexity=%d\n",(20+4*n));
t++;
t++;
printf("time complexity=%d\n",t);
}
