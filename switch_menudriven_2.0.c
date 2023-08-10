#include<stdio.h>
main()
{
    int x,y,z,ch;
    char m;
    printf("\n press<1> for area of triangle");
    printf("\n press <2> for absolute value of a no.");
    printf("\n press <3> for greatest no. among three no.");
    printf("\n press <4> for check vowel or consonant");
    printf("\n press <5> for smaller no between two no.");
    printf("\n press <6> for exit");
    printf("\n please enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("enter the base and height");
        scanf("%d%d",&x,&y);
        printf("area is %f\n",1.0/2*x*y);
        break;
        case 2:printf("enter the no.");
        scanf("%d",&x);
        if(x>0)
            printf("absolute value is %d",1*x);
        else
        printf("absolute value is %d",-1*x);
        break;
        case 3:printf("enter three no.");
        scanf("%d%d%d",&x,&y,&z);
        ((x>y&&x>z)? printf("x is greatest %d",x):((y>z)?printf("y is greatest %d",y):printf("z is greatest %d",z)));
        break;
        case 4: printf("enter a character");
       fflush(stdin);
       scanf ("%c",&m);
            switch(m)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'U':
            case 'O':printf("vowel\n");break;
            default :printf("consonant");
        }
        break;
        case 5: printf("enter two no.");
        scanf("%d%d",&x,&y);
        ((x>y)?printf("y is smaller no.%d",y):printf("x is smaller no.%d",x));
        break;
        default :printf("invalid choice");
}
}
/*

 press<1> for area of triangle
 press <2> for absolute value of a no.
 press <3> for greatest no. among three no.
 press <4> for check vowel or consonant
 press <5> for smaller no between two no.
 press <6> for exit
 please enter your choice1
enter the base and height2
9
area is 9.000000

Process returned 0 (0x0)   execution time : 21.214 s
Press any key to continue.*/
