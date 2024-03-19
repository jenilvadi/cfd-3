#include<stdio.h>
void main()
{
    int n,fact=1;
     printf("enter the vlue");
     scanf("%d",&n);

    for(int i=1;i<=n;i++){
       fact *= i;
        printf("%d\n",fact);
    }


}