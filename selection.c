#include<stdio.h>
void main()
{
int n,i=0,j=0,small,a[20],temp,t=0;
t++;
t++;
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
}
t++;
for(i=0;i<n;i++)
{
t++;
  small=i;
   for(j=i+1;j<n;j++)
  {
  t++;
    if(a[small]>a[j])
   {
   t++;
     small=j;
    }
}
t++;
if(i!=small)
{
t++;
temp=a[i];
a[i]=a[small];
a[small]=temp;
}
}
t++;
printf("the sorted list:\n");
t++;
for(i=0;i<n;i++)
{
t++;
printf("%d\t",a[i]);
t++;
}
printf("\nspace complexity=%d\n",((6*4)+(4*n)));
t++;
t++;
printf("time complexity=%d\n",t);
}



