#include <stdio.h>

int plus(int a, int b) {
    return a + b;
}

int main() {
    int i, n = 10;
    int t[n];
    
    int x = 5;
    int y = 3; 
    

    int z = plus(x, y);


    for(i = 0; i < n; i++) {
        t[i] = i+1 + 100;
    }

    for(i = 0; i < n; i++) {
        printf("%d\n", t[i]);
    }

    printf("\n\n\n--------------------\n\n\n");

    // Definicja tablicy t o n-elementach
    // int t[8];
    // *t;


    // int t[i];
    // 
    // t + i

    // int j; // rezerwuje pamiec dla zmiennej int, oraz "j" ma wartosc z tej pamieci
    // j;   // dostaje wartosc z pamieci
    // &j;  // dostaje adres tej pamieci

    // int array[7]; // rezerwuje 7 komorek pamieci typu int, 'array' wskazuje na adres w pamieci
    // array // adres w pamieci
    // array[1] // wartosci w pamieci w drugiej komurce, bo indexy tablicy zaczynaja sie od zera
    // &array[1] // adres drugiego elementu tablicy

    // // zeby odczytac wartosc z adresu pamieci uzywamy '*'
    // *(&array[1]) // wartosc w drugiej komorce tablicy

    for(i = 0; i < n; i++) {
        printf("I. %d      ||     %d\n", *t, *(t + 0));
    }

    printf("\n\n\n--------------------\n\n\n");

    for(i = 0; i < n; i++) {
        printf("I. %d      ||     %d\n", t[i], *(t + i));
    }

    for(i = 0; i < n; i++) {
        printf("%p\n", t + i);
    }

    return 0;
}
