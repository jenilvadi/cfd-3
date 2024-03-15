#include<stdio.h>
void main()
{
    int i=2020,year;

    printf("enter the year");
    scanf("%d",&year);

    while (i<=year)
    {
        if(i%4==0)
        {
        printf("%d\n",i);
        }
        i++;
    }
    
}