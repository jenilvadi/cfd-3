#include<stdio.h>
sum(int arr[]){
    int sum;
    for (int i = 0; i <= 4; i++)
    {
        sum +=arr[i];
    }
    return sum;
}

void main(){

  int arr[]={6,4,1,5,2};

  
  printf("sum of all arr value=%d",sum(arr));


}