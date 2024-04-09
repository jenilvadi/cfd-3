#include <stdio.h>  
  
void  main()  
{  
    
     
    for(int i=4;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
            printf(" ");  
        }  
        for(int k=1;k<=4;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }  
   
}  