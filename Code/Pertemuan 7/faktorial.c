#include <stdio.h>

int factorial(int n);
int main(int argc, char const *argv[])
{
    printf("%d\n", factorial(5));

    return 0;
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
