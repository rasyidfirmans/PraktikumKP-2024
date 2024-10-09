#include <stdio.h>

int main(int argc, char const *argv[])
{
    char myStr[101];

    fgets(myStr, sizeof(myStr), stdin);

    printf("%s", myStr);
    return 0;
}
