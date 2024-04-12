#include<stdio.h>
cube(int *n){
    printf("cube of value:%d",*n**n**n);
}
void main(){

int a;
printf("Enter the value of 'a' : ");
scanf("%d",&a);
  

cube(&a);  
}