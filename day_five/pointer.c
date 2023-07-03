#include <stdio.h>

int sum(int* a) {
  printf("1. sum: %d\n", *a);
  *a = *a + 4;
  printf("2. sum: %d\n", *a);
  return ***a;
}



int main() {
  int a = 10;

  printf("1. main: %d\n", a);
  printf("sum: %d\n", sum(&a));
  printf("2. main: %d\n", a);

  return 0;
}
