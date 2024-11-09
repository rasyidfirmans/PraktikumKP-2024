#include <stdio.h>

void rekrusi(int i){
    printf("Hello World!\n");
    if(i == 1){
        return;
    }
    return rekrusi(--i);
}

int main(int argc, char const *argv[])
{
    rekrusi(5);
    return 0;
}
