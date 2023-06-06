// Arrays:
// https://www.cs.swarthmore.edu/~newhall/unixhelp/C_arrays.html
#include <stdio.h>

#define BUFFER_SIZE 10

int main() {
  // dzieki temu ze kompilator zna rozmier tablicy, ktory wynosi `BUFFER_SIZE`
  // oraz dzieki temu ze kompilator zna typ elemntow, ktorym jest `char`
  // to kompilator jest w stanie okreslic ile byte'ów musi zarezerwowac dla tej tablicy
  char buffer[BUFFER_SIZE + 1];

  int i = 0;
  int character;

  printf("Wprowadz linie tekstu\n");

  while (((character = getchar()) != '\n') && (i < BUFFER_SIZE)) {
    buffer[i] = character;
    i++;
  }

  if ((character != '\n') && (i >= BUFFER_SIZE))
    printf("BUFFER OVER LOADED\n");

  // `\0` to EOL (End Of Line)
  buffer[i] = '\0';

  // dodajemy EOL by printf wiedzial gdzie w naszym bufforze koncza sie odczytane znaki
  printf("Odczytano znakow: %d\n", i);
  printf("%s\n", buffer);

  return 0;
}
