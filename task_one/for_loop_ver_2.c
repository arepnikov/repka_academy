#include <stdio.h>

int main() {
  int h = 5;
  int tree_width = 2 * h - 1;

  // zmienne pomocnicze
  int number_of_white_spaces, number_of_stars_in_line;
  char line[tree_width + 1];

  // i to tez zmienna pomocnicza, reprezentuje index iteracji petli for
  int i, j;

  // for(i = 0; i < h; i++) {
  // `i = 0` - wykona sie raz przed wszystkimi blokami
  // `i < h` - wykona przed kazdym blokiem i wykona blok jesli warunek jest prawdziwy
  // `i++`   - wykona po kazdym bloku
  for(i = 0; i < h; i++) {
    number_of_stars_in_line = 2 * i + 1; // 1, 3, 5, ...
    number_of_white_spaces = (tree_width - number_of_stars_in_line) / 2;

    for(j = 0; j < number_of_white_spaces; j++)
      line[j] = ' ';

    int number_of_elements = number_of_white_spaces + number_of_stars_in_line;
    for(j = number_of_white_spaces; j < number_of_elements; j++)
      line[j] = '*';

    line[j] = '\0';
    printf("%s\n", line);
  }

  /*===============*/
  /*     nozka     */
  /*===============*/
  // czyscimy cala tablice line
  for(j = 0; j < tree_width; j++)
    line[j] = ' ';

  // dla printf'a wstawiamy na koniec EOL (End Of Line)
  line[j] = '\0';

  // w srodek tablicy, ktory w tym przypadku jest rowny wysokosci drzewa
  // wstawiamy '*' czyli nozke.
  // `h-1` bo tablica jest indexowana od zera
  line[h-1] = '*';

  printf("%s\n", line);

  return 0;
}
