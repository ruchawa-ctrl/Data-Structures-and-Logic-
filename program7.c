/*
Algorithm:-
START
    Accept the first number as NO1
    Accept the second number as NO2
    Perform the addition of NO1 and NO2
    Display the result
STOP
*/

#include<stdio.h>

int main()
{
    //variable creation with default values
    float fNO1=0.0f;                //to store first input
    float fNO2=0.0f;                //to store second input
    float fResult=0.0f;             //to store final result

    printf("Enter first number: \n");
    scanf("%f",&fNO1);

    printf("Enter second number: \n");
    scanf("%f",&fNO2);

    fResult = fNO1 + fNO2;           //business logic

    printf("Addition is: %f\n",fResult);

    return 0;
}