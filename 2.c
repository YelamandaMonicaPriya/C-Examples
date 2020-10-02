//format specifiers
#include<stdio.h>
int main()
{
	int a=10;
	int b=-10;
	int c=0100;
	int d=0xA;
	float e=3.4;
	int f=3;
	float g=3;
	char h='h';

	printf("value of integer a using %%d:%d\n",a);
	printf("value of integer a using %%i:%i\n",a);
	printf("value of a and b using %%u(unsigned integer format specifier) a:%u, b:%u\n",a,b);
	printf("octal value of c is:%o\n",c);
	printf("integer value of c is:%d\n",c);
	printf("hexadecimal value of d using %%x:%x\n",d);
	printf("hexadecimal value of d using %%X:%X\n",d);
	printf("integer value of d:%d\n",d);
	printf("floating point value of e using %%f:%f\n",e);
	printf("exponential value of f:%e\t g:%e\n",f,g);
	printf("exponential value of f:%E\t g:%E\n",f,g);
	printf("float value of e using %%g to print the output same as the input with same precision:%g\n",e);
	printf("address value of a in hexadecimal form is:%p\n",&a);
	printf("value of character variable h is:%c\n",h);
	printf("string value:%s\n","hello c programming");
	//minimum field width specifier
	printf("a=%8d\n",a);
	printf("a=%-8d\n",a);
	printf("a=%08d\n",a);
	//specifying precision
	printf("value of e using precision:%.2f",e);
	return 0;
}

/*
value of integer a using %d:10
value of integer a using %i:10
value of a and b using %u(unsigned integer format specifier) a:10, b:4294967286
octal value of c is:100
integer value of c is:64
hexadecimal value of d using %x:a
hexadecimal value of d using %X:A
integer value of d:10
floating point value of e using %f:3.400000
exponential value of f:1.482197e-323     g:3.000000e+000
exponential value of f:1.482197E-323     g:3.000000E+000
float value of e using %g to print the output same as the input with same precision:3.4
address value of a in hexadecimal form is:000000000062FE00
value of character variable h is:h
string value:hello c programming
a=      10
a=10
a=00000010
value of e using precision:3.40
*/
