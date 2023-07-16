#include <stdio.h>
#include <stdlib.h>

int buffer_size;
char *buffer;

void handle_buffer_preparation() {
  printf("Podaj rozmiar bufora: ");
  scanf("%d", &buffer_size);

  // przez to ze podczas kompilacji lub uruchomiania programu
  // nie znamy rozmiaru bufora, bo poznamy to dopero od uzytkownika.
  // komputer nie przygotowuje pamieci.
  // Wiec musimy zorbic to sami:
  //
  // sizeof(char) - zwraca ile Byte'ow zajmuje jeden char
  // malloc - dostaje ilosc Byte'ow, ktore powinien zarezerwowac,
  //          czyli chce komorki w tablicy rozmiaru char, a
  //          ich ilosc rowna buffer size.
  //          Jesli bysmy mieli komorki typu int, to
  //             malloc(sizeof(int) * buffer_size)
  //
  //          malloc zwraca adres poczatku sekwencji komorek
  //          czyli adres poczatku tablicy,
  //          ktory nastepnie przypisujemy do juz zadeklarowanej
  //          zmiennej typu "wskaznik na char"
  buffer = malloc(sizeof(char) * (buffer_size + 1));

  return;
}

void test_buffer() {
  for(int i = 0; i < buffer_size; i++) {
    buffer[i] = 48 + i;
  }
  buffer[buffer_size] = '\0';

  printf("%s\n", buffer);

  return;
}

int scan_string(char *word) {
  char c;
  int counter = 0;

  while((c = getchar()) != EOF) {
    word[counter] = c;
    counter++;
  }

  word[counter] = '\0';

  return counter - 1;
}

int main() {
  handle_buffer_preparation();
  test_buffer();

  // // int word_size;
  // // word_size = scan_string(buffer);

  // // printf("Przeczytalem %d znakow\n", word_size);
  // // printf("Przeczytane slowo:\n\n%s\n", buffer);

  // // int column_a, column_c, column_d;
  // // char *column_b = buffer;

  // // scanf("%d %s %d %d\n", &column_a, column_b, &column_c, &column_d);

  // scan_string(buffer);
  // scanf("%s\n", buffer);

  // float f;
  // scanf("%f\n", &f);

  // printf("float: %f\n", f);

  int height;
  printf("podaj wysokosc choinki: ");
  scanf("%d", &height);



  printf("Podana wysokosc: %d\n", height);





  return 0;
}
