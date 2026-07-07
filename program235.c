#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Jay Ganesh...";
    int iRet = 0;

    //array size of string
    //'\0' is counted
    iRet = sizeof(str);
    printf("Size of string is: %d\n",iRet);

    return 0;
}