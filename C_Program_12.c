#include<stdio.h>

int main()
{
    int digit[50];
    char str[51];
    int size, index;
    printf("Enter the Number of Digits : ");
    scanf("%d",&size);
    printf("Enter the Digits : ");
    for(index=0;index<size;index++)
    {
        scanf("%d",&digit[index]);
    }
    for(index=0;index<size;index++)
    {
        str[index]=digit[index]+'0';
    }
    str[index] = '\0';
    printf("%s",str);
    return 0;
}
