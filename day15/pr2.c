#include<stdio.h>
void main()
{
    int arr[3],sum=0;
   
    for(int i=0;i<3;i++){
         printf("Enter the elements of array: \n");
	     scanf("%d",&arr[i]);
    }
    for(int i=0;i<3;i++){
           
      sum = sum  + arr[i];  

        
	     
    }
   printf("%d\n",sum);
}