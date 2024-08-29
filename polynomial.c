#include<stdio.h>
struct poly
{
  int coeff;
  int expo;
};
void main()
{
   int n,i=0;
   printf("enter the number of terms present\n");
   scanf("%d",&n);
   struct poly x[n];
   printf("enter the elements of the polynomial\n");
   printf("enter the coefficient and exponential value in descending order\n");
   for(i=0;i<n;i++)
    {
     printf("enter the coefficient term\n");
     scanf("%d",&x[i].coeff);
     printf("enter the exponential term\n");
     scanf("%d",&x[i].expo);
    }
  printf("The polynomial is:\n");
  for(i=0;i<n;i++)
   {
     printf("(%dx^%d)",x[i].coeff,x[i].expo); 
     if(i<n-1)
      {
        printf("+");
      }
     
   } 
 }


