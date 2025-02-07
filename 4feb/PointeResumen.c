#include <stdio.h>

int main()
{

	int num =10;

	//printf("Input a number:  ");
	//scanf("%d", &num);
	int *ptr = &num;

	printf("Value of num: %d\n", num);			  // 10
	printf("Address of num: %p\n", &num);		  // Some memory address
	printf("Value at ptr: %d\n", *ptr);			  // 10
	printf("Pointer value (address): %p\n", ptr); // Same as &num

	printf("Value at ptr: %d\n", ptr);			  
	printf("Pointer value (address): %p\n", *ptr); 

	return 0;
}