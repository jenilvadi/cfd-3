#include <stdio.h>
int main()
{


 

  for (int k = 1; k <= 5; k++)
  {
    for (int j = 1; j <= 5-k; j++)
      printf(" ");

    for (int j = 1; j <= 2*k-1; j++)
      printf("*");

    printf("\n");
  }

  for (int k = 1; k <= 5 - 1; k++)
  {
    for (int j = 1; j <= k; j++)
      printf(" ");

    for (int j = 1 ; j <= 2*(5-k)-1; j++)
      printf("*");

    printf("\n");
  }

 
}