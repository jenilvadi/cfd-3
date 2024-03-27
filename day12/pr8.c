
#include<stdio.h>
void main()
{
    int o=1;
        for(int i=1;i<=5;i++){
            for (int j = 1; j <=i;j++)
            {
               printf("%4d",o);
               o++;
            }
            printf("\n");
            
        }

}