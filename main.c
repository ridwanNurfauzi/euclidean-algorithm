/**
 * @file main.c
 * @author M. Ridwan Nurfauzi (mrnhp123@gmail.com)
 * @brief Program untuk mencari FPB menggunakan algoritma Euklides
 * @version 0.1
 * @date 2025-06-09
 *
 * @copyright Copyright (c) 2025
 */

#include <stdio.h>

// Fungsi untuk mencari FPB menggunakan algoritma Euklides
int fpb(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(int argc, char const *argv[])
{
    int a = 52, b = 124;

    printf("FPB dari %d dan %d adalah %d.\n", a, b, fpb(a, b));

    return 0;
}
