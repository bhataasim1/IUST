#include<stdio.h>
#include<string.h>
int main()
{
    char str[100] = "My name is Aasim";
    int i,count=0;
    // printf("Enter a string: ");
    // gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    printf("Number of white spaces in the string is: %d",count);
    return 0;
}