
# Standard Input/Output library functions

Fungsi ini tidak perlu memakai library lain hanya memakai `<stdio.h>` saja, berikut contohnya:

<!-- <table>
    <tr>
        <th>Function</th>
        <th>Deskripsi</th>
    </tr>
    <tr>
        <td>int getchar(void);</td>
        <td>Mengambil karakter berikutnya dari input standar sebagai integer.</td>
    </tr>
    <tr>
        <td>char *fgets(char *s, int n, FILE *stream);</td>
        <td>Membaca karakter dari stream ke array s hingga newline atau akhir file, maksimal n - 1 karakter.</td>
    </tr>
    <tr>
        <td>int putchar(int c);</td>
        <td>Mencetak karakter c dan mengembalikannya sebagai integer.</td>
    </tr>
    <tr>
        <td>int puts(const char *s);</td>
        <td>Mencetak string s dengan newline. Mengembalikan nilai non-nol jika berhasil.</td>
    </tr>
    <tr>
        <td>int sprintf(char *s, const char *format, ...);</td>
        <td>Menyimpan output ke array s seperti printf, lalu mengembalikan jumlah karakter yang ditulis.</td>
    </tr>
    <tr>
        <td>int sscanf(char *s, const char *format, ...);</td>
        <td>Membaca input dari array s seperti scanf, dan mengembalikan jumlah item yang terbaca.</td>
    </tr>
</table> -->

| Function                                         | Deskripsi                                                                                            |
|--------------------------------------------------|------------------------------------------------------------------------------------------------------|
| `int getchar(void);`                             | Mengambil karakter berikutnya dari input standar sebagai integer.                                    |
| `char *fgets(char *s, int n, FILE *stream);`     | Membaca karakter dari stream ke array `s` hingga newline atau akhir file, maksimal `n - 1` karakter. |
| `int putchar(int c);`                            | Mencetak karakter `c` dan mengembalikannya sebagai integer.                                          |
| `int puts(const char *s);`                       | Mencetak string `s` dengan newline. Mengembalikan nilai non-nol jika berhasil.                       |
| `int sprintf(char *s, const char *format, ...);` | Menyimpan output ke array `s` seperti `printf`, lalu mengembalikan jumlah karakter yang ditulis.     |
| `int sscanf(char *s, const char *format, ...);`  | Membaca input dari array `s` seperti `scanf`, dan mengembalikan jumlah item yang terbaca.            |

## function `int getchar();`

syntax
```c
int a;
a = getchar();

println("%c", a);

/*
input:
w
output:
w
*/
```

## function `char fgets(char *s, int n, FILE *stream)`

syntax
```c
char string[100];
fgets(string, 100, stdin);

printf("%s", string);

/*
input:
Hello World
output:
Hello World
*/
```

## function `putchar()` dan `puts()`

syntax
```c
char a[] = "Hello World";
puts(a);
puts("Output String");

/*
output:
Hello World
Output String
*/
```

## function `sprintf(char *s, const char *format, ...);`

syntax
```c
int a = 35;
float b = 3.3;
char string[100];

sprintf(string, "integer %d float %.2f", a, b);
puts(string);

/*
output:
integer 35 float 3.30
*/
```

## function `int sscanf(char *s, const char *format, ...);`

syntax
```c
char string[] = "2346 34.231";
int a;
float b;

sscanf(string, "%d%f", &a, &b);
printf("Isi string : 2346 34.231\n");
puts("Setelah memakai sscanf");
printf("integer    : %d\n", a);
printf("float      : %.3f\n", b);

/*
output:
Isi string : 2346 34.231
Setelah memakai sscanf
integer    : 2346
float      : 34.231
*/
```