#include<stdio.h>
void main()
{
    int i;

    printf("enter the number");
    scanf("%d",&i);

    while (i>=0)
    {
        if(i%2!=0)
        {
        printf("%d\n",i);
        }
        i--;
    }
    
}