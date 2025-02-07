#include <stdio.h>

int main () {
int ages[] = {12, 54, 34, 82, 23, 17, 22, 7};

float avg, sum = 0;
int i;


int length = sizeof (ages) / sizeof (ages[0]); //find length of array

for (i = 0; i < length; i++) { //loop  to add up all ages
  sum += ages[i];
  }
avg = sum/length; // average age

	//finding out lowest age
int lower = ages[0];//assign first value

for (i = 0; i<length; i++){
  if (lower>ages[i])
    lower = ages[i];
}

printf ("The average age is: %.2f\n", avg);
printf ("The lowest age is: %d\n", lower);

 return 0;
}
