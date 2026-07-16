#include<stdio.h>

int main()
{
    int num, count, index=0, pos;
    char arr[100];
    printf("Enter the Number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        arr[index]=num%10;
        num=num/10;
        index++;
    }
    for(pos=index-1;pos>=0;pos--)
    {
        printf("\n%c",arr[pos]+'0');
    }
    return 0;
}
