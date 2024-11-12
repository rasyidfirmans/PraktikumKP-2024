#include <stdio.h>

int thisIsFunc(int *a)
{
    int x = 100;
    a = &x;
    *a = 5;

    return x;
}

int main(int argc, char const *argv[])
{
    int a = 5;

    a = thisIsFunc(&a);

    printf("%d\n", a);
    return 0;
}
