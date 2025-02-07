#include <stdio.h>

int main() {

float num1, num2, result;
char operator;

printf("This is a basic calculator,\n"); 
printf("where you need to input two numbers and an operator\n");

printf("First number: \n");
scanf("%f", &num1);

//We need to clear the buffer
while (getchar() != '\n');

do {
	printf("What operation do you want to do (+, -, *, /): \n");

	operator = getchar();

	while (getchar() != '\n');

}while (operator != '+' && operator != '-' && operator != '*' && operator != '/');

printf("Second number: \n");
scanf("%f", &num2);


switch (operator) {
	case '+':
		result = num1 + num2;
		printf("%.2f + %.2f = %.2f\n", num1, num2, result);
		break;
	case '-':
		result = num1 - num2;
		printf("%.2f - %.2f = %.2f\n", num1, num2, result);
		break;
	case '*':
		result = num1 * num2;
		printf("%.2f * %.2f = %.2f\n", num1, num2, result);
		break;
	case '/':
		if (num2 != 0) {
		result = num1 / num2;
		printf("%.2f / %.2f = %.2f\n", num1, num2, result);
		}
		else {
		printf("You cannot divide by zero\n");
		}
		break;
	default:
		printf("Not a valid operator.\n");
		
};

return 0;
}

