#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int a = 0;
    int b = 1;
    int c;

    scanf("%d", &n);

    printf("%d\n", a);
    printf("%d\n", b);

    for (int i = 0; i < n - 2; i++)
    {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }

    return 0;
}
