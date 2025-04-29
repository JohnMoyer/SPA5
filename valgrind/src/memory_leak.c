#include <stdlib.h>

int main() {
    int *ptr = malloc(10 * sizeof(int));
    return 0; // memory leak, no free
}