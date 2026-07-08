# include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;

    start = str;

    while(*str != '\0')
    {
        str++;
    }
            str--;

    while(start <= str)
    {
        printf("%s\n",*str);
        str--;
    }
    printf("\n");
}

int main()
{
    int i = 11;
    int j = 21;

    int temp = 0;

    temp = i;
    i = j;
    j = temp;

    printf(i);
    printf(j);



    return 0;
}