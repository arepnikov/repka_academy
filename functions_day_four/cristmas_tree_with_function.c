#include <stdio.h>

void print_line(int tree_width, int number_of_white_spaces, int number_of_stars_in_line) {
  // kazdy raz gdy wywolasz fukcje, system zaalokuje ci nowa pamiec
  char line[tree_width + 1];
  int j;

  for(j = 0; j < number_of_white_spaces; j++)
    line[j] = ' ';

  int number_of_elements = number_of_white_spaces + number_of_stars_in_line;
  for(j = number_of_white_spaces; j < number_of_elements; j++)
    line[j] = '*';

  line[j] = '\0';
  printf("%s\n", line);
}

int main() {
  int h = 5;
  int tree_width = 2 * h - 1;

  int i;
  int number_of_white_spaces, number_of_stars_in_line;

  for(i = 0; i < h; i++) {
    number_of_stars_in_line = 2 * i + 1; // 1, 3, 5, ...
    number_of_white_spaces = (tree_width - number_of_stars_in_line) / 2;

    print_line(tree_width, number_of_white_spaces, number_of_stars_in_line);
  }

  // h - 1 bialych znakow i jedna nozka
  // print_line(tree_width, h - 1, 1);
  number_of_stars_in_line = 1; // nozka
  number_of_white_spaces = h - 1;
  print_line(tree_width, number_of_white_spaces, number_of_stars_in_line);

  return 0;
}
