# include<stdio.h>

//call by value
void swap(int iNO1, int iNO2)
{
    int temp = 0;
    temp = iNO1;
    iNO1 = iNO2;
    iNO2 = temp;
}

int main()
{
    int i = 11;
    int j = 21;

    swap(i,j);

    printf(i);
    printf(j);



    return 0;
}