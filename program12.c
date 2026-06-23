#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRemainder = 0;

    iRemainder = iNo%2;

    if(iRemainder==0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
}

int main()
{
    int iValue=0;
    
    printf("Enter an integer number: \n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);   

    return 0;
}