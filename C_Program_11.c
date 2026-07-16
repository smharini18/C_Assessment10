#include<stdio.h>
int main()
{
    char str[50];
    int num[50];
    int index=0, pos;
    printf("Enter the Number : ");
    scanf("%s",&str);
    while(str[index]!='\0')
    {
        index++;
    }
    for(pos=0;pos<index;pos++)
    {
        num[pos]=str[pos]-'0';
        printf("%d",num[pos]);
    }
}
