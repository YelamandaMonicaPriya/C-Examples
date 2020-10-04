//ascii values
#include<stdio.h>
int main()
{
	char s[10];
	int i=0,sum=0;
	printf("enter a string\n");
	scanf("%s",s);
	while(s[i]!='\0')
	{
	printf("the ascii value of %c is %d\n",s[i],s[i]);
	sum=sum+s[i];
	i++;
	}
	printf("the sum of the ascii values of the string:%d",sum);
	return 0;
}
/*
enter a string
a'A"@1zZ
the ascii value of a is 97
the ascii value of ' is 39
the ascii value of A is 65
the ascii value of " is 34
the ascii value of @ is 64
the ascii value of 1 is 49
the ascii value of z is 122
the ascii value of Z is 90
the sum of the ascii values of the string:560
*/
