#include <stdio.h>

int faktorial(int i){
    if(i == 1){
        return 1;
    }
    return i * faktorial(i-1);
}

int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);

    printf("%d\n", faktorial(a));
    
    return 0;
}
