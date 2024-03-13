#include <stdio.h>
void main()
{

    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");

    int a, b;
    printf("enter your choise");
    scanf("%d", &a);

    switch (a)
    {

    case 1:
        printf("Press 1 for Internet Recharge\n");
        printf("Press 2  for Top-up Recharge\n");
        printf(" press 3for Special Recharge\n");
        printf("enter your choise");
        scanf("%d", &b);

        switch (b)
        {
        case 1:
            printf("You have successfully done a Internet Recharge.");
            break;
        case 2:
            printf("You have successfully done a Top-Up Recharge.");
            break;
        case 3:
            printf("You have successfully done a Special Recharge.");
            break;
        default:
            printf("ivalid number");
            break;
        }

        break;
    case 2:
        printf(" Internet Recharge ke liye 1 dabaiye\n");
        printf("Top-up Recharge ke liye 2 dabaiye\n");
        printf(" Special Recharge ke liye 3 dabaiye\n");
        printf("enter your choise");
        scanf("%d", &b);

        switch (b)
        {
        case 1:
            printf("Aapne safaltapurvak Internet Recharge kar liya he.");
            break;
        case 2:
            printf("Aapne safaltapurvak top-up Recharge kar liya he.");
            break;
        case 3:
            printf("Aapne safaltapurvak special Recharge kar liya he.");
            break;
        default:
            printf(" apne dala huva number gala hai ");
            break;
        }
        break;
    case 3:
        printf(" Internet Recharge ke liye 1 dabavo\n");
        printf("Top-up Recharge ke liye 2 dabavo\n");
        printf(" Special Recharge ke liye 3 dabavo\n");
        printf("enter your choise");
        scanf("%d", &b);

        switch (b)
        {
        case 1:
            printf("Tame safaltapurvak Internet Recharge karyu chhe.");
            break;
        case 2:
            printf("Tame safaltapurvak Top-up Recharge karyu chhe");
            break;
        case 3:
            printf("Tame safaltapurvak Special Recharge karyu chhe");
            break;
        default:
            printf("Tme khoto number nakhel chhe");
            break;
        }
        break;
    default:
        printf("you have been presses invalid number");
        break;
    }
}