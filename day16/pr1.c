#include<stdio.h>
void main()
{
    int sum,avg;
    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) {
            printf("Enter element of row ");
            scanf("%d",&arr[i][j]);

    }
    printf("\n");
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) {
            sum +=arr[i][j];  
           

    }
    printf("\n");
    }
    printf("sum of arr=%d",sum);
     
     avg=sum/9;

     printf("avg of arr=%d",avg);

}
