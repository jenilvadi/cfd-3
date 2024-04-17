#include<stdio.h>
#include<string.h>

 struct student
    { 
        int id;
        char company[100];
        char model[100];
        int year;
        char color[100];
        int price;
        float mileage;
    }s1[100];


main(){
    
    int n;
    printf("Enter car number : ");
    scanf("%d",&n);


    for (int i = 0; i < n; i++)
    {
        printf("Enter car ID : ");
        scanf("%d",&s1[i].id);
        
        printf("Enter car company : ");
        scanf("%s",&s1[i].company);

        printf("Enter car model : ");
        scanf("%s",&s1[i].model);

        printf("Enter car year : ");
        scanf("%d",&s1[i].year);

        printf("Enter car color : ");
        scanf("%s",&s1[i].color);

        printf("Enter car price : ");
        scanf("%d",&s1[i].price);

        printf("Enyter car mileage : ");
        scanf("%f",&s1[i].mileage);

    }


    for (int i = 0; i < n; i++)
    {
        printf("ID : %d\n",s1[i].id);
        printf("company : %s\n",s1[i].company);
        printf("model : %s\n",s1[i].model);
        printf("year : %d\n",s1[i].year);
        printf("color : %s\n",s1[i].color);
        printf("price : %d\n",s1[i].price);
        printf("mileage : %f\n",s1[i].mileage);

    }
    
    
    
}