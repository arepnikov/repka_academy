// DISCLAMER: przyklady tylko pogladowe, w pamieci bity sa ilozone inaczej i zalezy to od
// architektury processora
#include <stdio.h>


int main() {
  char c = 'a'; // ASCII: 97

  // to w jaki sposob interpretujesz bity, okresla czym sa.
  // ten sam ciag bitow:
  // _ _ _ _ _ _ _ _    _ _ _ _ _ _ _ _    _ _ _ _ _ _ _ _    0 1 1 0 0 0 0 1
  //     BYTE_3              BYTE_2             BYTE_1            BYTE_0
  //
  // jesli w kodzie interpretujemy jako liczbe, to bedzie to liczta 97
  // ale jesli jako znak (char) to bedzie to znak w talicy ASCII na pozycji 97, czyli 'a'
  printf("c as digit: %d\n", c);
  printf("c as char:  %c\n", c);

  int i = 97 + 256;
  // wiemy ze char ma rozmiar 1 byte'a, czyli 8 bitow, na osmiu bitach mozna zapisac m
  // maksymalnie liczbe 255 (patrz koniec pliku)
  // wiemy ze integer ma 4 byte'y, czyli 32 bity, wiec mozemy w tej samej pamieci zmiescic
  // albo bity dla liczymy calkowitej (int) albo znak (char)
  //
  // ale od tego jak je interpretujemy bedzie zalezec co wyswietli program
  //
  // jesli `printf` dostanie w formatowaniu ze jego argument to liczba `%d` to odczyta 32 bity
  // ale jesli powiemy ze jego argument to znak `%c`, to odczyta tylko pierwsze 8 bitow a reszte
  // zignoruje
  printf("i as digit: %d\n", i);
  printf("i as char:  %c\n", i);

  // 97 = 64 + 32 + 1 = 2^6 + 2^5 + 2^0

  //     BYTE_0              BYTE_1             BYTE_2            BYTE_3
  //
  // 0 1 1 0 0 0 0 1
  // _ _ _ _ _ _ _ _    _ _ _ _ _ _ _ _    _ _ _ _ _ _ _ _    _ _ _ _ _ _ _ _
  //
  // 7 6 5 4 3 2 1 0


// 2^0 ==   1: 0 0 0 0 0 0 0 1
// 2^1 ==   2: 0 0 0 0 0 0 1 0
// 2^2 ==   4: 0 0 0 0 0 1 0 0
// 2^3 ==   8: 0 0 0 0 1 0 0 0
// 2^4 ==  16: 0 0 0 1 0 0 0 0
// 2^5 ==  32: 0 0 1 0 0 0 0 0
// 2^6 ==  64: 0 1 0 0 0 0 0 0
// 2^7 == 128: 1 0 0 0 0 0 0 0

// 2^6 ==  64: 0 1 0 0 0 0 0 0
// 2^7 == 128: 1 0 0 0 0 0 0 0
//        OR:  1 1 0 0 0 0 0 0

// 2^6 ==  64: 0 1 0 0 0 0 0 0
// 2^6 ==  64: 0 1 0 0 0 0 0 0
//        128: 1 0 0 0 0 0 0 0


// 1 1 1 1 1 1 1 1 == 128 + 64 + 32 + 16 + 8 + 4 + 2 + 1 == 255

// 0 0 0 1 0 0 0 0
// -
// 0 0 0 0 0 0 0 1
// =
// 0 0 0 0 1 1 1 1

  return 0;
}
