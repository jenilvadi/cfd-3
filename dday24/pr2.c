#include<stdio.h>

max(int *a ,int *b){

if (*a > *b){
    printf("minimum %d",*b);
}else
{
    printf("minimum %d",*a);
}


}

void main(){
int a,b;
printf("Enter the first number: ");
scanf("%d",&a);
printf("\nEnter the second number: ");
scanf( "%d" , &b);

max(&a , &b);
}