#include <stdio.h>
#include <stdlib.h>

char *buffer;

int main() {
  int buffer_size;
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

  for(int i = 0; i < buffer_size; i++) {
    buffer[i] = 48 + i;
  }
  buffer[buffer_size] = '\0';

  printf("%s\n", buffer);


  return 0;
}
