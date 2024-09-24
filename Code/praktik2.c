/*
Misi: buat program switch case dengan input dari user dengan tipe data int.
1. jika nilainya 1 -- print: "satu"
2. jika nilainya 2 -- print: "dua"
3. jika nilainya 3 -- print: "tiga"
4. jika nilainya 4 -- print: "empat"
5. jika nilainya 5 -- print: "lima"
6. selain itu -- print: "kurang dari satu atau lebih dari lima"
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input;

    scanf("%d", &input);

    switch (input)
    {
    case 1:
        printf("satu\n");
        break;
    case 2:
        printf("dua\n");
        break;
    case 3:
        printf("tiga\n");
        break;
    case 4:
        printf("empat\n");
        break;
    case 5:
        printf("lima\n");
        break;
    default:
        printf("kurang dari satu atau lebih dari lima\n");
        break;
    }
    return 0;
}
