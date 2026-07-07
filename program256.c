#include<stdio.h>

int CountCapital(const char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if (*str >= 'A' &&  *str <= 'Z')
        {
            iCount++;
        }
        
        str++;
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char Arr[50] = {'\0'}; //all chars ar \0 automatically

    printf("Enter string: \n");
    scanf("%[^'\n]s",Arr);    
    
    iRet = CountCapital(Arr);

    printf(" Frequency is: %d\n",iRet);

    return 0;
}
