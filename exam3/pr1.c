#include <stdio.h>

int main()
{
   int i,j,k;
   for(i=41;i<=45;i++)
   {
         for(k=4;k>=1;k--)
         {
       printf(" ");
         }
       for(j=41;j<=i;j++)
       {
       printf("%3d",j); 
       }
       printf("\n");
   }
}