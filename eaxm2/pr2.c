#include <stdio.h>  
void main()  
{  
   int n;  
   int c=0;     
   printf("Enter a number");  
   scanf("%d",&n);  
   while(n!=0)  
   {  
       n=n/10;  
       c++;  
   }  
     
   printf("\nThe number of digits  : %d",c);  
   }  