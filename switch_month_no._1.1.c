#include<stdio.h>
main()
{
    int m;
    printf("enter month no.");
    scanf("%d",&m);
    switch (m)
    {
        case 1:printf("january");
        break;
        case 2:printf("february");
        break;
        case (2+1):printf("march");
        break;
        case (20/5):printf("april");
        break;
        case 5:printf("may");
        break;
        case 6:printf("june");
        break;
        case 7:printf("july");
        break;
        case (5+3):printf("august");
        break;
        case 9:printf("september");
        break;
        case 10:printf("october");
        break;
        case 11:printf("november");
        break;
        case (6+6):printf("december");
        break;
        default:printf("invalid month no.");
    }
}
/*
enter month no.9
september
Process returned 0 (0x0)   execution time : 2.445 s
Press any key to continue.*/
