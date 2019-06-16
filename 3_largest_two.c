#include<stdio.h>

int main() {
    int a,b,c;
	printf("Enter numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c && b>=c)
    {
        printf("%d %d",a,b);
    }
    else if(b>=a && b>=c && c>=a)
    {
        printf("%d %d",b,c);
    }
    else if(c>=a && c>=b && a>=b)
    {
        printf("%d %d ",c,a);
    }
    else
    {
        printf("Bullshit!");
    }
	return 0;
}
