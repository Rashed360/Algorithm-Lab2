#include<stdio.h>

int main() {
    char ch;
	scanf("%c",&ch);
	int n=ch;
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if(ch >= 'a' && ch <= 'z')
            printf("Input is lowercase letter.");
        else
            printf("Input is uppercase letter.");
    }
    else if((ch >= '0' && ch <= '9') || (ch >= '-9' && ch <= '0'))
    {
        if(ch >= '0' && ch <= '9')
        {
            if(ch%2==0)
            {
                printf("Input is positive even digit.");
            }
            else
            {
                printf("Input is positive odd digit.");
            }
        }
        else
            printf("Input is negative digit.");
    }
    else
    {
        printf("bal");
    }
	return 0;
}
