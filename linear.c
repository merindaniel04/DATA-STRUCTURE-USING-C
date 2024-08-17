#include<stdio.h>
void main()
{


  int n,i,x,count=0,a[20],c=0;
  c++;
  c++;
  printf("Enter the value of n:");
  c++;
  scanf("%d",&n);
  c++;
  printf("Enter the number to be searched:");
  c++;
  scanf("%d",&x);
  c++;
  printf("Enter the elements:");
  c++;
  for(i=0;i<n;i++)
  {
   c++;
  scanf("%d",&a[i]);
  c++;
  }
  c++;
  for(i=0;i<n;i++)
  { 
  c++;
  if(a[i]==x)
  {
  c++;
  count++;
  
  printf("item found at location %d\n",i+1);
  c++;
  }
  }
  c++;
  if(count>0)
  {
  c++;
  printf("element found is %d times\n",count);
  c++;
  }
  else
  {
  c++;
  printf("element not found");
  c++;
  }
  printf("space complexity=%d\n",((5*4)+(4*n)));
  c++;
  c++;
  printf("time complexity=%d\n",c);
  
}











