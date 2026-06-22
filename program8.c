#include<stdio.h>

int AddTwoNumbers(float fNo1, float fNo2 )
{
    float fAnswer=0.0f;              //local variable
    fAnswer = fNo1 + fNo2;           //business logic
    return fAnswer;
}

int main()
{
    float fValue1=0.0f;                //to store first input
    float fValue2=0.0f;                //to store second input
    float fResult=0.0f;             //to store final result

    printf("Enter first number: \n");
    scanf("%f",&fValue1);

    printf("Enter second number: \n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1,fValue2);

    printf("Addition is: %f\n",fResult);

    return 0;
}