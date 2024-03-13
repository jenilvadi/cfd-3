#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value");
    scanf("%d%d%d",&a,&b,&c);

    (a<b)?(a<c)? printf("a is small"):printf("c is small")
    : (b<c) ? printf("b is small") : printf("c is small");
}