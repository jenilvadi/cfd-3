#include<stdio.h>
void main()
{
    int n,sum=0;
     printf("enter the vlue");
     scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum += i;
        printf("%d\n",sum);
    }


}