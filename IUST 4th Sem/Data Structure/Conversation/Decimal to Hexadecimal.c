#include<stdio.h>

int DecimalToHExa(int num)
{
    if(num == 0)
        return 0;
    DecimalToHExa(num / 16);
    int Hex = (num % 16);
    if(num > 9)
        printf("%c",Hex+55);
    else
        printf("%d",Hex);

    return 0;
}

int main()
{
    int num;

    printf("Enter the Number : ");
    scanf("%d",&num);

    printf("After Converting %d to Hexadecimal =", num);
    DecimalToHExa(num);
}
