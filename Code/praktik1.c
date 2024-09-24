/*
Misi: buat program if else dengan input dari user dengan tipe data int.
1. jika nilainya < 0 atau > 100 -- print: "error"
2. jika nilainya >=0 dan <49 -- print: nilainya
3. jika nilainya >=50 dan <75 -- print: "remedial"
4. jika nilainya >= 75 dan <=100 -- print: "lulus"
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int score;

    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
        printf("error\n");
    }
    else if (score >= 0 && score < 49)
    {
        printf("%d\n", score);
    }
    else if (score > 50 && score < 75)
    {
        printf("remedial\n");
    }
    else if (score >= 75 && score <= 100)
    {
        printf("lulus\n");
    }
    return 0;
}