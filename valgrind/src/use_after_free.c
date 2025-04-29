#include <stdlib.h>
#include <stdio.h>

int main() {
    int *ptr = malloc(sizeof(int));
    free(ptr);
    *ptr = 5; // use after free
    return 0;
}