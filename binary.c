
 #include<stdio.h>
void main()
{
int i,n,mid,x,left=0,right,a[100],flag=0,t=0;
t++;
t++;
t++;
printf("enter the size of array");
t++;
scanf("%d",&n);
t++;

printf("enter the elements");
t++;
for(i=0;i<n;i++)
{
t++;
 scanf("%d",&a[i]);
 t++;
 }
 t++;
 
 printf("enter the number to be searched");
t++;
scanf("%d",&x);
t++;
 right=(n-1);
 while(left<=right)
 {
 t++;
 mid=(left+right)/2;
 if(x==a[mid])
 {
 t++;
 flag=1;
 break;
 }
 else if(x>a[mid])
 {
 t++;
 left=mid+1;
 continue;
 }
 else if(x<a[mid])
 {
 t++;
 right=mid-1;
 continue;
 }
 }
 t++;
 if(flag==1)
 {
 t++;
 printf("the element is found \n");
 t++;}
 else
 {
 t++;
 printf("the element is not found");
 t++;
 }
 printf("space complexity=%d\n",((8*4)+(4*n)));
 t++;
 t++;
 printf("time complexity=%d\n",t);
 }
