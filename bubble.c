#include <stdio.h>
void main()
{
    int i,j,temp,n,a[20],t=0;
    t++;
    printf("enter the value of n\n");
    t++;
    scanf("%d",&n);
    t++;
    printf("enter the element\n");
    t++;
    for(i=0;i<n;i++)
    {
        t++;
        scanf("%d",&a[i]);
        t++;
    }
    t++;
    for(i=0;i<n-1;i++)
    {
        t++;
        for(j=0;j<n-i-1;j++)
       {
          t++;
             if(a[j]>a[j+1])
             {
                 t++;
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
             }
         t++;
        }
         t++;
    }
        t++;
        printf("the sorted elements are\n");
        t++;
      for(i=0;i<n;i++)
    {
       t++;
       printf("%d\t",a[i]);
       t++;\
        
    }
  t++;
  printf("\nspace complexity=%d\n",5*4+(4*n));
  t++;
  t++;
   printf("time complexity=%d\n",t);
}
