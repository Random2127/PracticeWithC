
#include <stdio.h>

int main () {
int myNum = 2;
int newNum = 5;
int copyNum;

printf("myNum is now: %d \n", myNum);
myNum = newNum;
printf("myNum after being reassigned is : %d \n", myNum);
copyNum = newNum;
printf("copyNum after being copied is: %d \n", copyNum);

return 0;

}


