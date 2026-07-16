#include<stdio.h>

int main()
{
    char str[50];
    int index = 0;
    printf("Enter the Number : ");
    scanf("%s", str);
    while(str[index] == '0')
    {
        index++;
    }
    if(str[index] == '\0')
    {
        printf("0");
    }
    else
    {
        printf("%s", &str[index]);
    }
    return 0;
}
