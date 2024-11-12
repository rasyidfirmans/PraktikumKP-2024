#include <stdio.h>

int fib(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main(int argc, char const *argv[])
{
    int akuSebuahVariabel;
    scanf(" %d", &akuSebuahVariabel);
    printf("fibonacci ke-7 = %d\n", fib(akuSebuahVariabel));
    // printf("fibonacci ke-2 = %d\n", fib(2));
    // printf("fibonacci ke-1 = %d\n", fib(1));
    /* code */
    return 0;
}
