#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value:");
    scanf("%d%d",&a,&b);

    printf("value of a :%d\n",a);
    printf("value of b :%d\n",b);


   printf("after swpe value\n");
    c=a;
    a=b;
    b=c;
    printf("value of a :%d\n",a);
    printf("value of b :%d\n",b);
}