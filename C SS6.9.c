#include <stdio.h>
#include <math.h>

int main() {
    int n, tong, temp, chuSo;
    
    for (n = 100; n <= 999; n++) {
        tong = 0;
        temp = n;

        while (temp != 0) {
            chuSo = temp % 10;
            tong += pow(chuSo, 3);
            temp /= 10;
        }
        if (tong == n) {
            printf("%d ", n);
        }
    }

    return 0;
}

