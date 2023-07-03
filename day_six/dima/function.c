#include <stdio.h>

int main() {
    int i, n = 10;
    int t[n];
    /*for (i = 1; i <= n; i++) {
        t[i-1]=i;
     }*/
    for(i = 0; i < n; i++) {
        t[i] = i+1;
        printf("%d\n", t[i]);
    }

    return 0;
}
