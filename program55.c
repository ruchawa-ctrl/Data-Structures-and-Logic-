//nput: 8
//output: 1   3   5   7   
#include<stdio.h>

void Display(int iNo)
{
    for(int iCnt=1; iCnt<=iNo; iCnt+1)
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