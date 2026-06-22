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
    float i,j,k;

    printf("Enter first number: \n");
    scanf("%f",&i);

    printf("Enter second number: \n");
    scanf("%f",&j);

    k=i+j;

    printf("Addition is: %f\n",k);

    return 0;
}