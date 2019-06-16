#include<stdio.h>

int main() {
    int n,o;
    printf("1. Odd or Even\n2. Divisible by 5\n3. Divisible by 7\n\nEnter any number: ");
    scanf("%d",&n);
    printf("Choose any option: ");
    scanf("%d",&o);
    if(o==1)
    {
        if(n%2==0)
            printf("Input is Even number");
        else
            printf("Input is Odd number");
    }
    else if(o==2)
    {
        if(n%5==0)
            printf("Input is Divisible by 5");
        else
            printf("Input is not Divisible by 5");
    }
    else if(o==3)
    {
        if(n%7==0)
            printf("Input is Divisible by 7");
        else
            printf("Input is not Divisible by 7");
    }
    else
    {
        printf("Choose correct option!");
    }
	return 0;
}
