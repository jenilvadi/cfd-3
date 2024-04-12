#include<stdio.h>

swap(int *a ,int *b,int *c){

printf("befor swap");
printf("\n a = %d",*a);
printf("\n b = %d",*b);
printf("\n c = %d",*c);
printf("\nafter  swap");
int *t;
t=*a;
*a=*b;
*b=*c;
*c=t;
printf("\n a = %d",*a);
printf("\n b = %d",*b);
printf("\n c = %d",*c);

}

void main(){
int a,b,c;
printf("Enter the first number: ");
scanf("%d",&a);
printf("\nEnter the second number: ");
scanf( "%d" , &b);
printf("\nEnter the third number: ");
scanf( "%d" , &c);

swap(&a , &b ,&c);
}