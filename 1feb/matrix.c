#include <stdio.h>

int main() {
int matrix [2][3] = {{1,3,5},{2,4,8}};

printf("Numbers in the matrix are:\n");
int i,j;

for (i = 0; i < 2; i++) {
  for (j = 0; j < 3; j++){
   printf(" %d\n", matrix [i][j]);
  }
}
return 0;
}


