#include<stdio.h>

int main() {
    int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n<0)
    {
        printf("Absolute of %d is %d.",n,n*-1);
    }
    else
    {
        printf("Absolute of %d is %d.",n,n);
    }
	return 0;
}
