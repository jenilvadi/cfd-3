
#include <stdio.h>

int main()
{
    int unit;
    float jj, total,bill;

    
    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    
    if(unit <= 50)
    {
        jj = unit * 0.50;
    }
    else if(unit <= 150)
    {
        jj = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        jj = 100 + ((unit-150) * 1.20);
    }
    else
    {
        jj = 220 + ((unit-250) * 1.50);
    }

   
    bill = jj * 0.20;
    total  = jj + bill;

    printf("Electricity Bill = Rs. %0.2f", total);

    
}