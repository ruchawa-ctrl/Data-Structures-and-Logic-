#include<stdio.h>

void Update(char *str)
{
    while(*str != '\0')
    {
        if (*str == 'l')
        {
            *str = 'L';
        } 
        str++;
    }
    printf(str);
}

int main()
{
    char Arr[50] = {'\0'}; //all chars ar \0 automatically

    printf("Enter string: \n");
    scanf("%[^'\n]s",Arr);    
    
   Update(Arr);

    printf(" Frequency is: %s\n",Arr);

    return 0;
}
