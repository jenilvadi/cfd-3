#include<stdio.h>

max(int *a ,int *b){

printf("befor swap");
printf("\n a = %d",*a);
printf("\n b = %d",*b);
printf("\nafter  swap");
int *t;
t=*a;
*a=*b;
*b=t;
printf("\n a = %d",*a);
printf("\n b = %d",*b);

}

void main(){
int a,b;
printf("Enter the first number: ");
scanf("%d",&a);
printf("\nEnter the second number: ");
scanf( "%d" , &b);

max(&a , &b);
}