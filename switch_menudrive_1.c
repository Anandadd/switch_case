#include<stdio.h>
main()
{
    int x,y,ch;
    char m;
    printf("\n press <1> for area of rectangle");
    printf("\n press <2> for circumference of circle");
    printf("\n press <3> for cube of no.");
    printf("\n press <4> for check even or odd");
    printf("\n press <5> for exit");
    printf("\n please enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("enter the length and breadth");
        scanf("%d%d",&x,&y);
        printf("area of rectangle is %d\n",x*y);
        break;
        case 2:printf("enter the radius");
        scanf("%d",&x);
        printf("circumference of circle is %f",2*3.14*x);
        break;
        case 3:printf("enter the no.");
        scanf("%d",&x);
        printf("cube of a no. is %d\n",y*y*y);
        break;
        case 4: printf("enter a no.");
        scanf("%d",&x);
        switch(x%2)
        {
            case 0: printf("even");
            break;
            case 1: printf("odd");
            break;
            case 5: break;
            default: printf("invalid choice");
    }
    }
        }
/*

 press <1> for area of rectangle
 press <2> for circumference of circle
 press <3> for cube of no.
 press <4> for check even or odd
 press <5> for exit
 please enter your choice2
enter the radius8
circumference of circle is 50.240000
Process returned 0 (0x0)   execution time : 9.090 s
Press any key to continue.*/
