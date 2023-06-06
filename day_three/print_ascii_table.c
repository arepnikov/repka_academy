#include <stdio.h>

#define CHARS_IN_LINE 16

int main() {
  for(int i = 0; i < 128; i++) {
    if (i % CHARS_IN_LINE == 0) {
      printf("\n");
    }

    printf("%c ", i);
  }

  return 0;
}
