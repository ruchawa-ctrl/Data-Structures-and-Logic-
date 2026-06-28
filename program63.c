//nput: 5
//output: -5  -3  -1 
#include<stdio.h>

void Display(int iNo)
{
    for(int iCnt=-iNo; iCnt<=0; iCnt+=2)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}