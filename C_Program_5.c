#include<stdio.h>

int main()
{
    int num;
    char text[100];
    printf("Enter a number : ");
    scanf("%d", &num);
    sprintf(text, "%d", num);
    printf("The string is : %s", text);
    return 0;
}
