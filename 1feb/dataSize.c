#include <stdio.h>


int main() {

	char myChar= 'a';
	int myInt = 1 ;
	short myShort = 2;
	long myLong = 3;
	long long Mydouble = 4;
	float myFloat = 1.2;
	double myDouble = 2.3;
	long double myLDouble = 3.4;

 printf("Size of char: %lu bytes\n", sizeof(char));
 printf("Size of int: %lu bytes\n", sizeof(int));
 printf("Size of short: %lu bytes\n", sizeof(short));
 printf("Size of long: %lu bytes\n", sizeof(long));
 printf("Size of long long: %lu bytes\n", sizeof(long long));
 printf("Size of float: %lu bytes\n", sizeof(float));
 printf("Size of double: %lu bytes\n", sizeof(double));
 printf("Size of long double: %lu bytes\n", sizeof(long double));
    return 0;
}
