#include<stdio.h>
#include<string.h>


int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string: \n");
    //give onlyt the startinv address and rest is stored in line
    scanf("%s",Arr);            //issue taken input only till first space

    printf("Entered string is : %s\n", Arr);

    return 0;
}