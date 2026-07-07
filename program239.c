#include<stdio.h>
#include<string.h>


int main()
{
    char *str = "Ganesh";       //char str[] = "Ganesh"; sameee sameee
    int iRet = 0;
    int iCount = 0;

    //this if written after the while loop , the loop went uptil \0 
    //as per concept it will count characters until \0 occus 
    //hence the ouptut will give 0 if put at bottom
    printf("Length of string is : %lu\n", strlen(str));

    while(*str != '\0')
    {
        iCount++;
        printf("%c\n", *str);
        str++;
    }

    printf("Length of string is : %d\n", iCount);

    return 0;
}