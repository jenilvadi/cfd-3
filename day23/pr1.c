#include<stdio.h>
sum(int a) {
    
    int sum,sqr;
    printf("enter the number=");
    scanf("%d",&a);
for (int  i = 0; i <= a; i++)
{
   if(i%2==0){
    sum+=i;
       }
}

return sqr=sum*sum;

}


void main(){

int a;


printf("sum and squre=%d\n",sum(a));

}