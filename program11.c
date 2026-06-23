/*
START
    Accept number as No
    If no is completely divisible by 2 
        then print even
    Otherwise
        print odd
STOP

START
    Accept number as No
    Divide No by 2 
    If remainder is 0
        then print even
    Otherwise
        print odd
STOP
*/
#include<stdio.h>

int main()
{
    int iValue=0;
    int iRemainder=0;

    printf("Enter an integer number: ");
    scanf("%d", &iValue);

    iRemainder = iValue%2;

    if(iRemainder==0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }

    return 0;
}