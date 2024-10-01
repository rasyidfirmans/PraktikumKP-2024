
# Memory functions dari string library

Fungsi-fungsi perpustakaan penanganan string dalam bagian ini memanipulasi, membandingkan, dan mencari blok memori. Fungsi-fungsi ini memperlakukan memori sebagai array karakter dan dapat memanipulasi blok data apa pun. Tabel berikut merangkum fungsi-fungsi memori dari perpustakaan penanganan string. Dalam pembahasan fungsi, "objek" merujuk pada blok data.

<!-- <table border="1" cellpadding="10">
  <thead>
    <tr>
      <th>Prototipe fungsi</th>
      <th>Deskripsi fungsi</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>void *memcpy(void *s1, const void *s2, size_t n);</td>
      <td>
        Menyalin n byte dari objek yang ditunjuk oleh s2 ke objek yang ditunjuk oleh s1, 
        kemudian mengembalikan pointer ke objek hasil salinan.
      </td>
    </tr>
    <tr>
      <td>void *memmove(void *s1, const void *s2, size_t n);</td>
      <td>
        Menyalin n byte dari objek yang ditunjuk oleh s2 ke objek yang ditunjuk oleh s1. 
        Penyalinan dilakukan seolah-olah byte tersebut pertama kali disalin dari objek yang ditunjuk oleh s2 
        ke dalam array sementara dan kemudian dari array sementara tersebut ke objek yang ditunjuk oleh s1. 
        Pointer ke objek hasil salinan dikembalikan.
      </td>
    </tr>
    <tr>
      <td>int memcmp(const void *s1, const void *s2, size_t n);</td>
      <td>
        Membandingkan n byte pertama dari objek yang ditunjuk oleh s1 dan s2. 
        Fungsi ini mengembalikan 0 jika s1 sama dengan s2, kurang dari 0 jika s1 lebih kecil dari s2, 
        atau lebih besar dari 0 jika s1 lebih besar dari s2.
      </td>
    </tr>
    <tr>
      <td>void *memchr(const void *s, int c, size_t n);</td>
      <td>
        Menemukan kemunculan pertama c (dikonversi menjadi unsigned char) 
        dalam n byte pertama dari objek yang ditunjuk oleh s. Jika c ditemukan, 
        memchr mengembalikan pointer ke c dalam objek; jika tidak, mengembalikan NULL.
      </td>
    </tr>
    <tr>
      <td>void *memset(void *s, int c, size_t n);</td>
      <td>
        Menyalin c (dikonversi menjadi unsigned char) ke dalam n byte pertama dari objek yang ditunjuk oleh s, 
        kemudian mengembalikan pointer ke hasilnya.
      </td>
    </tr>
  </tbody>
</table> -->

| Prototipe Fungsi       | Deskripsi Fungsi     |
| --- | --- |
| `void *memcpy(void *s1, const void *s2, size_t n);`      | Menyalin n byte dari objek yang ditunjuk oleh `s2` ke objek yang ditunjuk oleh `s1`, kemudian mengembalikan pointer ke objek hasil salinan.                                                                                                        |
| `void *memmove(void *s1, const void *s2, size_t n);`     | Menyalin n byte dari objek yang ditunjuk oleh `s2` ke objek yang ditunjuk oleh `s1`. Penyalinan dilakukan seolah-olah byte tersebut pertama kali disalin dari objek yang ditunjuk oleh `s2` ke dalam array sementara dan kemudian dari array sementara tersebut ke objek yang ditunjuk oleh `s1`. Pointer ke objek hasil salinan dikembalikan. |
| `int memcmp(const void *s1, const void *s2, size_t n);`  | Membandingkan n byte pertama dari objek yang ditunjuk oleh `s1` dan `s2`. Fungsi ini mengembalikan 0 jika `s1` sama dengan `s2`, kurang dari 0 jika `s1` lebih kecil dari `s2`, atau lebih besar dari 0 jika `s1` lebih besar dari `s2`.               |
| `void *memchr(const void *s, int c, size_t n);`          | Menemukan kemunculan pertama `c` (dikonversi menjadi unsigned char) dalam n byte pertama dari objek yang ditunjuk oleh `s`. Jika `c` ditemukan, `memchr` mengembalikan pointer ke `c` dalam objek; jika tidak, mengembalikan `NULL`.                    |
| `void *memset(void *s, int c, size_t n);`                | Menyalin `c` (dikonversi menjadi unsigned char) ke dalam n byte pertama dari objek yang ditunjuk oleh `s`, kemudian mengembalikan pointer ke hasilnya.                                                                                              |


## Function `memcpy`

Fungsi `memcpy` dalam library `string.h` di bahasa C digunakan untuk menyalin blok memori dari satu lokasi ke lokasi lain. Ini adalah salah satu fungsi penting untuk memanipulasi memori di C, dan berperan dalam pengelolaan data tingkat rendah.

syntax
```c
char s1[17] = "";
char s2[] = "Hello World";

memcpy(s1, s2, 17);
puts("Setelah s2 tercopi di s1 dengan memcpy, s1 berisi:");
puts(s1);

/*
output
Setelah s2 tercopi di s1 dengan memcpy, s1 berisi:
Hello World
*/
```

## Function `memmove`

Fungsi `memmove` digunakan untuk menyalin blok memori dari satu lokasi ke lokasi lain, serupa dengan `memcpy`, namun dengan satu perbedaan penting: `memmove` menangani penyalinan data yang tumpang tindih (overlap) dengan benar. Fungsi ini memastikan bahwa penyalinan aman meskipun lokasi sumber dan tujuan berada di area memori yang sama.

syntax
```c
char x[] = "Home Sweet Home"; // initialize char array x

printf("The string in array x before memmove is: %s\n", x);
printf("The string in array x after memmove is: %s\n",
(char *) memmove(x, &x[5], 10));

/*
output
The string in array x before memmove is: Home Sweet Home
The string in array x after memmove is: Sweet Home Home
*/
```

## Function `memcmp`

Fungsi `memcmp` digunakan untuk membandingkan blok memori byte per byte. Fungsi ini berguna ketika kita ingin mengetahui apakah dua blok memori (termasuk string atau data lainnya) sama atau berbeda, dan jika berbeda, apakah salah satu lebih besar atau lebih kecil dari yang lain.

syntax
```c
char s1[] = "ABCDEFG";
char s2[] = "ABCDXYZ";

printf("s1 = %s\ns2 = %s\n\n%s%d\n%s%d\n%s%d\n", s1, s2,
"memcmp(s1, s2, 4) = ", memcmp(s1, s2, 4),
"memcmp(s1, s2, 7) = ", memcmp(s1, s2, 7),
"memcmp(s2, s1, 7) = ", memcmp(s2, s1, 7));

/*
output
s1 = ABCDEFG
s2 = ABCDXYZ

memcmp(s1, s2, 4) = 0
memcmp(s1, s2, 7) = -1
memcmp(s2, s1, 7) = 1
*/
```

## Function `memchr`

Fungsi `memchr` digunakan untuk mencari byte pertama dengan nilai tertentu dalam blok memori. Fungsinya mirip dengan fungsi pencarian karakter dalam string, tetapi bekerja pada blok memori umum dan dapat mencari karakter dalam bagian manapun dari memori, termasuk non-string.

syntax
```c
const char s[] = "This is a string";

printf("The remainder of s after character 'r' is found is \"%s\"\n",
memchr(s, 'r', 16));

/*
output
The remainder of s after character 'r' is found is "ring"
*/
```

## Function `memset`

Fungsi `memset` digunakan untuk mengisi blok memori dengan nilai tertentu. Fungsi ini sangat berguna untuk menginisialisasi blok memori dengan nilai yang sama (biasanya nol) atau untuk mengatur byte-byte dalam memori ke nilai tertentu.

syntax
```c
const char s[] = "This is a string";

printf("The remainder of s after character 'r' is found is \"%s\"\n",
memchr(s, 'r', 16));

/*
output
The remainder of s after character 'r' is found is "ring"
*/
```