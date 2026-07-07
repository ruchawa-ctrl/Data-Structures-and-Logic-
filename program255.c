#include<stdio.h>

int CountSmall(const char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if (*str >= 'a' &&  *str <= 'z')
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
    
    iRet = CountSmall(Arr);

    printf(" Frequency is: %d\n",iRet);

    return 0;
}
