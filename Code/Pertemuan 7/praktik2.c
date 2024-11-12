#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *a = (int *)malloc(5 * sizeof(int));

    // menampilkan alamat memori dari setiap elemen array
    // printf("%p\n", &a[0]);
    // printf("%p\n", &a[1]);
    // printf("%p\n", &a[2]);
    // printf("%p\n", &a[3]);
    // printf("%p\n", &a[4]);

    int *b = (int *)realloc(a, 10 * sizeof(int));

    int *c = (int *)calloc(10, sizeof(int));

    printf("%d\n", c[0]);
    printf("%d\n", c[1]);
    printf("%d\n", c[2]);
    printf("%d\n", c[3]);
    printf("%d\n", c[4]);
    printf("%d\n", c[5]);

    free(b);
    free(b);
    free(c);

    return 0;
}
