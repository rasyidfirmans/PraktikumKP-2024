#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int a = 0;
    int b = 1;
    int c;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // base case ketika suku ke-0 dan ke-1
        if (i == 0 || i == 1)
        {
            printf("%d\n", i);
            continue;
        }

        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }

    return 0;
}
