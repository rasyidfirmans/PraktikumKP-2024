# 1.4 - Pemilihan dan Perulangan Sederhana

Salah satu hal yang paling fundamental dalam pemrograman adalah adanya operasi pemilihan dan perulangan.

**Pemilihan** (atau pengambilan keputusan/decision making) adalah tindakan yang akan dilakukan oleh program apabila dihadapkan pada beberapa pilihan atau kondisi yang akan memproduksi instruksi yang berbeda.

Kemudian **perulangan** adalah kemampuan program untuk **melakukan sekumpulan instruksi yang sama berulang kali** selama **kondisi tertentu memenuhi**. Apabila kondisi perulangan tersebut **selalu memenuhi**, maka yang dikhawatirkan adalah terjadinya **infinite loop** atau program akan berjalan selamanya sehingga berpotensi crash/hang. Oleh karena itu, perhatikan betul dalam menggunakan operasi perulangan.

Operasi pemilihan yang akan digunakan di sini adalah **if - else**, sedangkan operasi perulangan yang digunakan adalah **while**.

## Pemilihan: if - else

Format penggunannya yaitu:

```c
if (/* kondisi */) {
  /* perintah... */
}
/* opsional: */
else if (/* kondisi lain */) {
  /* perintah... */
}
else if (/* kondisi lainnya lagi) {
  /* perintah... */
}
/* else if ... */
else {
  /* perintah... */
}
```

Contoh penggunaan if-else dalam program C adalah sebagai berikut:

Potongan kode berikut menampilkan "Bagus!" di layar ketika `nilaiSaya` **memiliki value 100**

```c
if (nilaiSaya == 100) {
  printf("Bagus!\n");
}
```

Potongan kode berikut menampilkan "Bagus!" di layar ketika `nilaiSaya` memiliki value **lebih dari atau sama dengan 85**, atau "Coba lagi!" jika tidak

```c
if (nilaiSaya >= 85) {
  printf("Bagus!\n");
} else {
  printf("Coba lagi\n");
}
```

Potongan kode berikut menampilkan "Bagus!" di layar ketika `nilaiSaya` memiliki value **lebih dari atau sama dengan 85**, "Cukup" ketika `nilaiSaya` **kurang dari 85** tetapi **lebih besar dari atau sama dengan 50**, "Coba lagi" jika tidak memenuhi semuanya

```c
if (nilaiSaya >= 85) {
  printf("Bagus!\n");
} else if ((nilaiSaya < 85) && (nilaiSaya >= 50)) {
  printf("Cukup\n");
} else {
  printf("Coba lagi\n");
}
```

Potongan kode berikut menampilkan "Lulus" di layar ketika `nilaiSaya` memiliki value **lebih dari atau sama dengan 50** dan "Tidak lulus" apabila memiliki value **kurang dari 50**

```c
if (nilaiSaya >= 50) {
  printf("Lulus\n");
} else if (nilaiSaya < 50) {
  printf("Tidak lulus\n");
}
```

### Operator Pembanding

| Operator | Keterangan                        | Penjelasan                                     |
| :------: | --------------------------------- | ---------------------------------------------- |
|  A == B  | sama dengan                       | cek jika A sama dengan B                       |
|  A != B  | tidak sama dengan                 | cek jika A tidak sama dengan B                 |
|  A > B   | lebih besar dari                  | cek jika A lebih besar dari B                  |
|  A >= B  | lebih besar dari atau sama dengan | cek jika A lebih besar dari atau sama dengan B |
|  A < B   | kurang dari                       | cek jika A kurang dari B                       |
|  A <= B  | kurang dari atau sama dengan      | cek jika A kurang dari atau sama dengan B      |

### Konjungsi

| Operator | Keterangan  | Penjelasan                                                                                                 |
| :------: | ----------- | ---------------------------------------------------------------------------------------------------------- |
|    !A    | tidak (NOT) | dijalankan apabila kondisi A tidak bernilai benar                                                          |
|  A && B  | dan (AND)   | dijalankan apabila kondisi A dan B semuanya benar                                                          |
| A \|\| B | atau (OR)   | dijalankan apabila kondisi A bernilai benar atau B bernilai benar (salah satu dari A dan B bernilai benar) |

### Tips

- Selalu gunakan tanda kurung ( dan ) apabila diperlukan untuk mempertegas urutan evaluasi. Jika tidak diberi tanda kurung, program akan mengevaluasi operasi NOT atau `!` terlebih dahulu, kemudian operasi AND atau `&&`, kemudian yang terakhir operasi OR atau `||`.

### Source Code

<details>
<summary>Contoh source code (full)</summary>

```c
#include <stdio.h>
int main() {
  int nilaiSaya;

  printf("Masukkan nilai anda: ");
  scanf("%d", &nilaiSaya);

  if (nilaiSaya >= 85) {
    printf("Bagus!\n");
  } else if ((nilaiSaya < 85) && (nilaiSaya >= 50)) {
    printf("Cukup\n");
  } else {
    printf("Coba lagi\n");
  }

  return 0;
}

/*
Output:

Masukkan nilai anda: 80
Cukup
*/
```

</details>

## Pemilihan: switch

Switch case sangat berguna ketika ingin melakukan perbandingan untuk banyak kasus

## Syntax:

```c
switch (/* expression */)
{
    case /* konstan */:
        /* perintah... */
        break; /* opsional */

    case /* konstan */:
        /* perintah... */
        break; 
        
    default:  /* opsional */
        break; 
}
```


## Penjelasan:

Contoh penggunaan switch dalam program C adalah sebagai berikut:
- ketika `pilihan` bernilai 1 maka potongan kode dibawah akan menampilkan **kamu memilih angka 1**
- ketika `pilihan` bernilai 2 maka potongan kode dibawah akan menampilkan **kamu memilih angka 2**
- ketika `pilihan` **tidak** bernilai 1 atau 2 maka potongan kode dibawah akan menampilkan **kamu tidak memilih angka 1 dan 2**

```c
switch (pilihan)
{
    case 1:
        printf("kamu memilih angka 1\n");
        break; 

    case 2:
        printf("kamu memilih angka 2\n");
        break; 
        
    default:  
        printf("kamu tidak memilih angka 1 dan 2\n");
        break; 
}
```

**switch** statement bisa memiliki **case: labels** sebanyak-banyaknya asalkan setiap **label** bernilai konstan dan unik.

**break** merupakan hal yang penting dalam switch, karena jika tidak digunakan maka semua pernyataan setelah **label yang cocok**, akan dijalankan atau dieksekusi sampai ketemu **break**. contohnya: 

- ketika `pilihan` bernilai 1 maka potongan kode dibawah akan menampilkan <br> **aku 1** <br> **aku 2**
- ketika `pilihan` bernilai 2 maka potongan kode dibawah akan menampilkan <br> **aku 2**
- ketika `pilihan` bernilai 3 maka potongan kode dibawah akan menampilkan <br> **aku 3** <br> **aku 4** <br> **aku default**


```c
switch (pilihan)
{
    case 1:
        printf("aku 1\n");

    case 2:
        printf("aku 2\n");
        break;

    case 3:
        printf("aku 3\n");

    case 4:
        printf("aku 4\n");
        
    default:  
        printf("aku default\n");
}
```

### Case Ranges:
Case Ranges adalah ekstension dari bahasa C yang berarti ini bukan C standar (tidak bisa digunakan pada semua compiler C)

Cara menggunakannya seperti ini:
```
case rendah ... tinggi
```
Dengan menggunakan Case Ranges penulisan code menjadi lebih cepat dan mudah dibaca.<br> Berikut perbandingannya:
- Tidak menggunakan Case Ranges
  ```c
    switch (pilihan)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("angkamu diantara 1 - 5\n");
            break;
    }
  ```
- Menggunakan Case Ranges
  ```c
    switch (pilihan)
    {
        case 1 ... 5:
            printf("angkamu diantara 1 - 5\n");
            break;
    }
    ```

### Source code
<details>
  <summary>Contoh Source Code</summary>

  ```c
#include <stdio.h>

int main() {
    double angkaPertama, angkaKedua, hasil;
    char op;
    printf("Masukkan Angka Pertama, Operator, Angka Kedua. yang mana Operatornya diantara (+, -, *, /): ");
    scanf("%lf %c %lf", &angkaPertama, &op, &angkaKedua);

    switch (op) {
        case '+':
            hasil = angkaPertama + angkaKedua;
            break;
        case '-':
            hasil = angkaPertama - angkaKedua;
            break;
        case '*':
            hasil = angkaPertama * angkaKedua;
            break;
        case '/':
            hasil = angkaPertama / angkaKedua;
            break;
        default:
            printf("Operator mu salah");
    }
    printf("%.1lf %c %.1lf = %.1lf\n", 
        angkaPertama, op, angkaKedua, hasil);
}
  ```
</details>