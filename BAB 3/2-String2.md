
# Search Function of the String-Handling Library

Bagian ini menyajikan fungsi-fungsi pustaka penanganan string yang mencari karakter dan string lain di dalam string. Library yang akan digunakan untuk function dibawah yaitu `<string.h>`

### Fungsi Prototipe dan Deskripsi

| Prototipe Fungsi                                                                                  | Deskripsi                                                                                                                                                  |
|---------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------|
| `char *strchr(const char *s, int c);`                                                              | Menemukan kemunculan pertama karakter `c` dalam string `s`. Jika ditemukan, `strchr` mengembalikan pointer ke `c` dalam string `s`. Jika tidak, mengembalikan `NULL`. |
| `size_t strcspn(const char *s1, const char *s2);`                                                  | Menentukan dan mengembalikan panjang segmen awal dari string `s1` yang hanya terdiri dari karakter-karakter yang tidak ada di `s2`.                                |
| `size_t strspn(const char *s1, const char *s2);`                                                   | Menentukan dan mengembalikan panjang segmen awal dari string `s1` yang hanya terdiri dari karakter-karakter yang terdapat di `s2`.                            |
| `char *strpbrk(const char *s1, const char *s2);`                                                   | Menemukan kemunculan pertama dalam string `s1` dari karakter apa pun yang ada di string `s2`. Jika karakter dari `s2` ditemukan, `strpbrk` mengembalikan pointer ke karakter tersebut dalam `s1`. Jika tidak, mengembalikan `NULL`. |
| `char *strrchr(const char *s, int c);`                                                             | Menemukan kemunculan terakhir dari karakter `c` dalam string `s`. Jika ditemukan, `strrchr` mengembalikan pointer ke `c` dalam string `s`. Jika tidak, mengembalikan `NULL`. |
| `char *strstr(const char *s1, const char *s2);`                                                    | Menemukan kemunculan pertama string `s2` dalam string `s1`. Jika string ditemukan, `strstr` mengembalikan pointer ke string di `s1`. Jika tidak, mengembalikan `NULL`. |
| `char *strtok(char *s1, const char *s2);`                                                          | Memecah string `s1` menjadi token yang dipisahkan oleh karakter yang terkandung dalam `s2`. `strtok` mengembalikan pointer ke token saat ini dalam setiap panggilan berurutan. Jika tidak ada token lagi, `strtok` mengembalikan `NULL`. |


## Function `strchr`

syntax
```c
const char *string = "This is a test"; 
char character1 = 'a';
char character2 = 'z';


if (strchr(string, character1) != NULL) { 
printf("\'%c\' was found in \"%s\".\n", character1, string);
}
else { 
printf("\'%c\' was not found in \"%s\".\n", character1, string);
}
if (strchr(string, character2) != NULL) {
printf("\'%c\' was found in \"%s\".\n", character2, string);
}
else {
printf("\'%c\' was not found in \"%s\".\n", character2, string);
}

/*
output
'a' was found in "This is a test".
'z' was not found in "This is a test".
*/
```

## Function `strcspn`

syntax
```c
const char string1[] = "The value is 3.14159";
const char string2[] = "1234567890";

printf("string1 = %s\nstring2 = %s\n\n%s\n%s%d\n", string1, string2,
    "Panjang segmen awal dari string1",
    "yang tidak mengandung karakter dari string2 = ",
    strcspn(string1, string2));

/*
output
string1 = The value is 3.14159
string2 = 1234567890

Panjang segmen awal dari string1
yang tidak mengandung karakter dari string2 = 13
*/
```

## Function `strpbrk`

syntax
```c
const char string1[] = "This is a test";
const char string2[] = "beware";

printf("%s\"%s\"\n'%c'%s \"%s\"\n",
"Karakter dalam string ", string2, *strpbrk(string1, string2),
" muncul duluan dari string ", string1);

/*
output
Karakter dalam string "beware"
'a' muncul duluan dari string  "This is a test"
*/
```

## Function `strrchr`

syntax
```c
const char s1[] = "A zoo has many animals including zebras";
int c = 'z';

printf("%s '%c' %s\n\"%s\"\n",
"Sisa dari string1 dimulai dengan kemunculan terakhir karakter",
c, "is:", strrchr(s1, c));

/*
output
Sisa dari string1 dimulai dengan kemunculan terakhir karakter 'z' is:
"zebras"
*/
```

## Function `strspn`

syntax
```c
const char string1[] = "The value is 3.14159";
const char string2[] = "aehi lsTuv";

printf("string1 = %s\nstring2 = %s\n\n%s\n%s%d\n", string1, string2,
"Panjang segmen awal dari string1",
"yang hanya mengandung karakter dari string2 = ",
strspn(string1, string2));

/*
output
string1 = The value is 3.14159
string2 = aehi lsTuv

Panjang segmen awal dari string1
yang hanya mengandung karakter dari string2 = 13
*/
```

## Function `strstr`

syntax
```c
const char string1[] = "abcdefabcdef";
const char string2[] = "def";

printf("string1 = %s\nstring2 = %s\n\n%s\n%s%s\n", string1, string2,
"Sisa dari string1 yang dimulai dengan",
"kemunculan pertama string2 adalah: ", strstr(string1, string2));

/*
output
string1 = abcdefabcdef
string2 = def

Sisa dari string1 yang dimulai dengan
kemunculan pertama string2 adalah: defabcdef
*/
```

## Function `strtok`

syntax
```c
char string[] = "This is a sentence with 7 tokens";

printf("The string to be tokenized is:\n%s\n\n", string);
puts("The tokens are:");

char tokenPtr[100] = strtok(string, " "); // begin tokenizing sentence

while (tokenPtr != NULL) {
printf("%s\n", tokenPtr);
tokenPtr = strtok(NULL, " "); // get next token
}

/*
output
string1 = abcdefabcdef
string2 = def

Sisa dari string1 yang dimulai dengan
kemunculan pertama string2 adalah: defabcdef
*/
```