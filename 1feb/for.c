#include <stdio.h>

int main() {

int i, j;

int n = 4;
  
  // Outer loop
  for (i = 0; i < n; ++i) {
    printf("Outer: %d\n", i);  
    
    // Inner loop
    for (j = 0; j <n - i; ++j) {
      printf(" Inner: %d\n", j);  
    }
  }

  
  return 0;
}
