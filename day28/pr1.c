#include<stdio.h>
#include<string.h>

 struct student
    {
        int id;
        char title[100];
        char author[100];
        char genre[100];
        char publisher[100];
        int year;
        int price;
    }s1[100];


main(){
    
    int n;
    printf("Enter book number : ");
    scanf("%d",&n);


    for (int i = 0; i < n; i++)
    {
        printf("Enter book ID : ");
        scanf("%d",&s1[i].id);
        
        printf("Enter book title : ");
        scanf("%s",&s1[i].title);

        printf("Enter book author : ");
        scanf("%s",&s1[i].author);

        printf("Enter book genre : ");
        scanf("%s",&s1[i].genre);

        printf("Enter book publisher name : ");
        scanf("%s",&s1[i].publisher);

        printf("Enter book publisher year : ");
        scanf("%d",&s1[i].year);

        printf("Enyter book price : ");
        scanf("%d",&s1[i].price);

    }


    for (int i = 0; i < n; i++)
    {
        printf("ID : %d\n",s1[i].id);
        printf("Title : %s\n",s1[i].title);
        printf("Author : %s\n",s1[i].author);
        printf("Genre : %s\n",s1[i].genre);
        printf("Publisher : %s\n",s1[i].publisher);
        printf("Year : %d\n",s1[i].year);
        printf("Price : %d\n",s1[i].price);

    }
    
    
    
}