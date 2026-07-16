#include<stdio.h>

int main()
{
    char str[100];
    int num=0, index=0;
    printf("Enter the string : ");
    scanf(" %s",&str);
    while(str[index]!=0)
    {
        num=num*10+(str[index]-'0');
        index++;
    }
    printf("The Integer is: %d",num);
    return 0;
}
