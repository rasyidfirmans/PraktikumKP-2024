#include <stdio.h>

void rekursi(int i)
{
    printf("Hello World!\n");
    if (i == 1)
    {
        return;
    }

    return rekursi(--i);

    // rekursi(i--);
    // printf("kelewatan\n");
}

int main(int argc, char const *argv[])
{
    rekursi(5);
    return 0;
}
