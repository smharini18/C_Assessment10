#include<stdio.h>

int main()
{
    char str[50];
    int index, flag=1;
    printf("Enter the Number : ");
    scanf("%s",&str);
    index=0;
    while(str[index]!='\0')
    {
        if(!(str[index]>='0' && str[index]<='9'))
        {
            flag=0;
            break;
        }
        index++;
    }
    if(flag)
    {
        printf("valid");
    }
    else
    {
        printf("Not valid");
    }
}
