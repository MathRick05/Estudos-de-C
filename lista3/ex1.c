#include <stdio.h>

int main() {
  int number = 1;

  while (number <= 50) {
    // Check if the number is even using modulo operator
    if (number % 2 == 0) {
      printf("%d \n", number);
    }
    number++;
  }

  printf("\n"); // Add a newline at the end
  return 0;
}