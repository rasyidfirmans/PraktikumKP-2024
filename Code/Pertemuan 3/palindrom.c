#include <stdio.h>

int main(int argc, char const *argv[])
{
    char myStr[] = "racecar";
    int isPalindrom = 1;

    int i = 0;
    int j = sizeof(myStr) / sizeof(myStr[0]) - 2;

    while (i < j)
    {
        if (myStr[i] != myStr[j])
        {
            printf("bukan palindrom\n");
            isPalindrom = 0;
            break;
        }

        i++;
        j--;
    }

    if (isPalindrom)
    {
        printf("palindrom\n");
    }

    return 0;
}
