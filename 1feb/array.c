
#include <stdio.h>

int main() {

int myArray[] = {1, 2, 3, 5, 7, 9, 17};

//print one element
printf ("Print element 6 = 17\n");

printf ("%d\n", myArray[6]);

//loop over list, knowing the number

printf ("Looping over the array knowing the number of elements: \n");

for (int i = 0; i<7; i++) {
 printf("%d\n", myArray[i]);
}

printf ("Print length method of the array: \n");
int arrlength = sizeof(myArray);
printf("%d\n\n", arrlength);

printf ("Print the weight of one element: \n");
int arrweight = sizeof(myArray[0]);
printf("%d\n\n", arrweight);

printf ("Looping over array using .length()\n");
  int length = sizeof(myArray) / sizeof(myArray[0]);
  //We divide sizeof of array by sizeof element
  int i;
  //loop over array using length
  for (i = 0; i<length; i++ ){
  printf("%d\n", myArray[i]);
  }

return 0;
}
