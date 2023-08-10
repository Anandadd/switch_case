#include<stdio.h>
main()
{
    int m;
    printf("enter month no.");
    scanf("%d",&m);
    switch (m)
    {
    default:printf("invalid month no.");break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:printf("31 days \n");
        break;
        case 2:printf("28 or 29 days \n");
        break;
        case 4:
        case 6:
        case 9:
        case 11:printf("30 days\n");
        break;
    }
}
/*
enter month no.6
30 days

Process returned 0 (0x0)   execution time : 3.348 s
Press any key to continue.*/
