/*
Name : Aasim Ashraf;
Roll No: CSE-20-LE-63;
Sem : 4th;
*/

#include <stdio.h>

int Convert(int num, int base)
{
    if(num == 0) return 0;

    Convert(num / base, base);
    int R = (num % base);
    if(base == 16 && R > 9)
        printf("%c",R +55);
    else
        printf("%d",R);
}
int main()
{
    int num, base;
    printf("Enter the Number : ");
    scanf("%d",&num);

    printf("Enter Base : ");
    scanf("%d",&base);

    printf("Converting %d with base %d \n",num, base);
    Convert(num, base);
}
