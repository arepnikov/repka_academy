#include <stdio.h>

int main() {
  int h = 5;
  int tree_width = 2 * h - 1;

  int i, j;
  int number_of_white_spaces, number_of_stars_in_line;

  for(i = 0; i < h; i++) {
    number_of_stars_in_line = 2 * i + 1; // 1, 3, 5, ...
    number_of_white_spaces = (tree_width - number_of_stars_in_line) / 2;

    for(j = 0; j < number_of_white_spaces; j++)
      printf(" ");

    for(j = 0; j < number_of_stars_in_line; j++)
      printf("*");

    printf("\n");
  }

  // nozka
  number_of_white_spaces = h - 1;
  for(j = 0; j < number_of_white_spaces; j++)
    printf(" ");
  printf("*");

  return 0;
}
