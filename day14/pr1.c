#include <stdio.h>

void main()

{

    int i, num, t = 0; 

    

    printf("Enter any numb to Check for Prime: ");

    scanf("%d", &num);

    

    for (i = 2; i <= num / 2; i++)

    {

        

        if (num % i == 0)

        {

            t++;

            break;

        }

    } 

     

    if (t == 0 && num != 1)

    {

        printf("%d is a Prime number", num);

    }

    else

    {

        printf("%d is not a Prime number", num);

    }

                                                            

}
