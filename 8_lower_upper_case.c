#include<stdio.h>

int main() {
    char ch;
	printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
	{
	    printf("%c",ch+32);
	}
	else if(ch>='a' && ch<='z')
    {
	    printf("%c",ch-32);
	}
	else
    {
	    printf("Not Alphabet");
	}
	return 0;
}
