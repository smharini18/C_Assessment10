#include<stdio.h>

int main()
{
    char str[50];
    int index=0, pos;
    printf("Enter the Number : ");
    scanf("%s",&str);
    while(str[index]!='\0')
    {
        index++;
    }
    for(pos=index-1;pos>=0;pos--)
    {
        printf("%c",str[pos]);
    }
}
