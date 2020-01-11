#include "libmx.h"

char *mx_strnew(const int size) {
    char *new;
    int i;

    if (size < 0)
        return NULL;
    new = malloc(size + 1);
    if (!new)
        return NULL;
    for (i = 0; i <= size; i++)
        new[i] = '\0';
    return new;
} 
