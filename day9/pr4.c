#include<stdio.h>
void main()
{
    int i=1,y;

    printf("enter the number");
    scanf("%d",&y);

    while (i<=y)
    {
        if(i%2!=0)
        {
        printf("%d\n",i);
        }
        i++;
    }
    
}