#include<stdio.h>
void main(){

    int a,b,c;
  
    printf("enter the value");
    scanf("%d%d%d",&a,&b,&c);

    if(a<b)
    {
        if(a<c)
        {
            printf("a is min");
            
        }
        else
        {
            printf("c is min");
        }
    }
   
    else
    {
        if(b<c)
        {
            printf("b is min");
    
        }
        else
        {
            printf("c is min");
        }
    }
   
}
