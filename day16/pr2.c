#include<stdio.h>
void main()
{
    int sum;
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
          if(i==j){
            printf("%d",arr[i][j]);
            sum +=arr[i][j];
          } 

    }
    printf("\n");
    }
     printf("sum dyo =%d\n",sum);
}
