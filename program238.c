#include<stdio.h>


int main()
{
    char *str = "Ganesh";       //char str[] = "Ganesh"; sameee sameee
    int iRet = 0;
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        printf("%c\n", *str);
        str++;
    }

    printf("Length of string is : %d\n", iCount);
    return 0;
}