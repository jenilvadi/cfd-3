#include<stdio.h>
void main()
{
    char a[]=" hello world";
   
    for (int i = 0; a[i] != NULL; i++)
    {
        if(a[i]>='A'&& a[i]<= 'Z'){
            a[i]+=32;

        }
        printf("%c",a[i]);
    }
    
    
}