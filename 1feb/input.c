#include <stdio.h>

int main() {
  // Create int variable to store the number from user
  int myNum;

  printf("Type a number and press enter: \n"); 

  // Get and save the number the user types
  scanf("%d", &myNum);
  printf("Your number is: %d\n", myNum);

  return 0;
}

