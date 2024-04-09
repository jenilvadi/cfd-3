#include<stdio.h>
void main()
{
    int arr[3];
   
    for(int i=0;i<3;i++){
         printf("Enter the elements of array: \n");
	     scanf("%d",&arr[i]);
    }
    for(int i=0;i<3;i++){
           
     if(arr[i]%2!=0){
         printf("%d\n",arr[i]);
     }


        
	     
    }
  
}