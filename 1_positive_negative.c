#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Input is negative");
    }
    else
    {
        printf("Input is positive");
    }

    return 0;
}
