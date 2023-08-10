#include<stdio.h>
main()
{
    int x,y,z,i,ch,day=0,m;
    char n;
    printf("\n press<1> for area of triangle");
    printf("\n press <2> for absolute value of a no.");
    printf("\n press <3> for greatest no. among three no.");
    printf("\n press <4> for check vowel or consonant");
    printf("\n press <5> for month name");
    printf("\n press <6> the day of 1st jan of the year");
    printf("\n press <7> for exit");
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
        if(x>y&&x>z)
            printf("x is greater no.");
        else if(y>x&&y>z)
            printf("y is greater no.");
        else if(z>x&&z>y)
            printf("z is greater no.");
        break;
        case 4: printf("enter a character");
       fflush(stdin);
       scanf ("%c",&n);
            switch(n)
        {
            case 'b':
            case 'c':
            case 'd':
            case 'f':
            case 'g':
            case 'h':
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 't':
            case 'v':
            case 'w':
            case 'x':
            case 'y':
            case 'z':
            case 'B':
            case 'C':
            case 'D':
            case 'F':
            case 'G':
            case 'H':
            case 'J':
            case 'K':
            case 'L':
            case 'M':
            case 'N':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            case 'T':
            case 'V':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
            printf("consonant\n");break;
            default :printf("vowels");
        }
        break;
        case 5: printf("enter month no.");
        scanf("%d",&m);
        if(m==1)
        printf("january");
    else if (m==2)
        printf("february");
    else if(m==3)
        printf("march");
    else if (m==4)
        printf("april");
    else if(m==5)
        printf("may");
    else if (m==6)
        printf("june");
    else if(m==7)
        printf("july");
    else if (m==8)
        printf("august");
    else if(m==9)
        printf("september");
    else if (m==10)
        printf("october");
    else if(m==11)
        printf("november");
    else if (m==12)
        printf("december");
    else
        printf("invalid month no.");
        break;
        case 6:printf("enter a year");
    scanf("%d",&x);
    for(i=1;i<x;i++)
    {
        if(i%4==0)
            day=day+366;
        else
            day=day+365;
    }
    day=day%7;
    if(day==1)
        printf("there is monday in 1/1/%d",x);
        if(day==2)
        printf("tuesday 1/1/%d",x);
       if(day==3)
        printf("wednesday 1/1/%d",x);
       if(day==4)
        printf("thursday 1/1/%d",x);
       if(day==5)
        printf("friday 1/1/%d",x);
       if(day==6)
        printf("saturday 1/1/%d",x);
       if(day==0)
        printf("sunday 1/1/%d",x);
        break;
        case 7: break;
        default :printf("invalid choice no.");
}
}
/*

 press<1> for area of triangle
 press <2> for absolute value of a no.
 press <3> for greatest no. among three no.
 press <4> for check vowel or consonant
 press <5> for month name
 press <6> the day of 1st jan of the year
 press <7> for exit
 please enter your choice5
enter month no.0
invalid month no.
Process returned 0 (0x0)   execution time : 10.007 s
Press any key to continue.*/

