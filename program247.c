#include<stdio.h>

int strlenX(char *str)
{
    *str = 'A';
}

int main()
{
    int iRet = 0;
    char Arr[50] = {'\0'}; //all chars ar \0 automatically

    printf("Enter string: \n");
    scanf("%[^'\n]s",Arr);    
    
    strlenX(Arr);

    printf("String length is: %s\n",Arr);

    return 0;
}