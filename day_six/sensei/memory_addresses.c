#include <stdio.h>

// argumenty to kopie danych, czyli funkcja ma swoja pamiec dla kazdej wartosci
int plus(int a, int b) {
    printf("(plus) a: %p  ||  %d\n", &a, a);
    printf("(plus) b: %p  ||  %d\n", &b, b);

    int z = a + b;
    printf("(plus) z: %p  ||  %d\n", &z, z);

    return z;
}

// argumenty to kopie danych, czyli funkcja ma swoja pamiec dla kazdej wartosci
void minus_four(int *a, int b) {
    printf("(minus_four) a: %p  ||  %d\n", a, *a);
    printf("(minus_four) b: %p  ||  %d\n", &b, b);
    *a = *a - 4;
    b = b - 4;

    printf("(minus_four) a: %p  ||  %d\n", a, *a);
    printf("(minus_four) b: %p  ||  %d\n", &b, b);
}

int main() {
    int x = 5;
    int y = 3; 
    
    printf("(main) x: %p  ||  %d\n", &x, x);
    printf("(main) y: %p  ||  %d\n", &y, y);

    int z = plus(x, y);
    printf("(main) z: %p  ||  %d\n", &z, z);

    printf("\n\n\n\n\n\n\n");

    x = 15;
    y = 8; 
    printf("(main) x: %p  ||  %d\n", &x, x);
    printf("(main) y: %p  ||  %d\n", &y, y);

    minus_four(&x, y);

    printf("(main) x: %p  ||  %d\n", &x, x);
    printf("(main) y: %p  ||  %d\n", &y, y);

    return 0;
}


// przejscie ze zmiennej na wskaznik: uzywamy '&'
// i - zmienne
// &i wskaznik na zmienna i, czyli adres w pamiecie zmienej i

// przejscie z adresu/wskaznika na wartosc w pamieci: uzywamy '*'
// p - wskaznik/pointer
// *p - wartosci w pamieci pod adresem 'p'

// i == *(&i)
