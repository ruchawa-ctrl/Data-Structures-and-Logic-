////////////////////////////////////////////////////////////////////
//
// Include required header files
//
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
// 
// Function Name :  CheckEvenOdd
// Input :          int
// Output :         boolean
// Description :    Checks if integer is even or odd
// Date :           10/05/2026
// Author :         Rucha Raghav Wavekar
//
////////////////////////////////////////////////////////////////////
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

//////////////////////////////////////////////////////////////////
//
// Application to perform addition of two float values
//
////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    
    printf("Enter an integer number to check whether it is even or odd: ");
    scanf("%d", &iValue);
    printf("\n");
    
    if(CheckEvenOdd(iValue))
    {
        printf("%d is an Even number\n",iValue);
    }
    else
    {
        printf("%d is an Odd number\n",iValue);
    }

    return 0;
}
////////////////////////////////////////////////////////////////////
//
// Input :  12      -12     13      -13   0
// Output : even    even    odd     odd   even
//
////////////////////////////////////////////////////////////////////