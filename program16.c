#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if((iNo%2)==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false; 
    
    printf("Enter an integer number to check whether it is even or odd: ");
    scanf("%d", &iValue);
    printf("\n");

    bRet = CheckEvenOdd(iValue); 
    
    if(bRet==true)
    {
        printf("%d is an Even number\n",iValue);
    }
    else
    {
        printf("%d is an Odd number\n",iValue);
    }

    return 0;
}