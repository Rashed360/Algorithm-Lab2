#include<stdio.h>

int main() {
    float b,s,p;
	printf("Buy: ");
	scanf("%f",&b);
	printf("Sell: ");
	scanf("%f",&s);
	p=((s-b)/b)*100;
	if(p>0)
    {
        printf("Profit: %0.2f %%",p);
    }
    else if(p<0)
    {
        printf("Loss: %0.2f %%",p*-1);
    }
    else
    {
        printf("No profit no loss");
    }
	return 0;
}
