
#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
long double ld = 1;

// i++;

printf ("Tamanho de ld (long double) eh: %zu bytes / %zu bits\n", sizeof ld, sizeof ld *8);

printf ("Valor de ld eh: %f\n", ld);
return 0;
}

