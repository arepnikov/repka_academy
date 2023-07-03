#include <stdio.h>

int main() {
    int n = 10;
    int i;
    int t[n];
    int n_of_el;

     for(i = 0; i < n; i++) {
        n_of_el = i + 1;
        t[i] = n_of_el;
     }

    return 0;
}
