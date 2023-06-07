#include <stdio.h>

#define BUFFER_SIZE 4

int main() {
  char character;
  int buffer[BUFFER_SIZE];
  int buffer_position = 0;

  printf("Wprowadz liczbe\n");

  while(((character = getchar()) != '\n') && (buffer_position < BUFFER_SIZE)) {
    // filtrujemy znaki, wykorzystujemy tylko znaki, ktore sa liczbami od 0 do 9
    if ((character >= 48) && (character <= 57)) {
      buffer[buffer_position] = character - '0';
      buffer_position++;
    }
  }

  if ((character != '\n') && (buffer_position >= BUFFER_SIZE))
    printf("BUFFER OVER LOADED\n");

  // buffer: [1,0,2,4]
  int digit = ((buffer[0] * 10 + buffer[1]) * 10 + buffer[2]) * 10 + buffer[3];
  printf("%d\n", digit);

  return 0;
}
