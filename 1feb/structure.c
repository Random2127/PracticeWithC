#include <stdio.h>
//Create the struct
struct myStructure {
int myNum;
char myLetter;
};

int main() {
//create a struct varible
  struct myStructure s1;
//Assign values to members of s1

s1.myNum = 13;
s1.myLetter = 'a';

printf("My number is: %d\n", s1.myNum);
printf("My letter is: %c\n", s1.myLetter);

return 0;
}
