#include<stdio.h>
rectangle(int h , int w) {  
printf("enter the  height and width of rectangle=\n"); 
scanf("%d%d",&h,&w);
if(h>0 && w>0){
    
    printf("rectangle height=%d\n",h);
  printf("rectangle width=%d\n",w);
  int area = h * w;


printf("rectangle Area=%d",area);

  }
  else{
   printf("invalid input \n");
  }

  

}



void main(){

int a,b;

rectangle(a,b);


}