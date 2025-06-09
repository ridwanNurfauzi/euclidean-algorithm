# Algoritma Euklides

Algoritma Euklides atau _Euclidean algorithm_ adalah metode klasik untuk menemukan faktor persekutuan terbesar (FPB) dari dua bilangan. Algoritma ini didasarkan pada prinsip bahwa FPB dari dua bilangan tidak berubah jika bilangan yang lebih besar dikurangi dengan bilangan yang lebih kecil, atau jika bilangan yang lebih besar dibagi dengan bilangan yang lebih kecil dan digantikan dengan sisanya.

## Langkah-Langkah

1. Ambil dua bilangan, misalnya a dan b, dengan a > b.
2. Bagikan a dengan b, lalu ambil sisanya r.
3. Jika r = 0, maka b adalah FPB.
4. Jika r &ne; 0, ubah pasangan angka menjadi b dan r, lalu ulangi proses sampai sisanya menjadi nol.

## Contoh

Mencari FPB dari **52** dan **124** menggunakan algoritma Euklides:

1. **124 ÷ 52** → hasil **2**, sisa **20**
2. **52 ÷ 20** → hasil **2**, sisa **12**
3. **20 ÷ 12** → hasil **1**, sisa **8**
4. **12 ÷ 8** → hasil **1**, sisa **4**
5. **8 ÷ 4** → hasil **2**, sisa **0**

Karena sisanya **0**, maka **FPB dari 52 dan 124 adalah 4**.
