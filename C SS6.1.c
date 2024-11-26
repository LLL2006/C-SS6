#include <stdio.h>

int main() {
    int n; 
    int tong = 0; 

    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 1; i <= 5; i++) {
        printf("So thu %d: ", i);
        scanf("%d", &n);

        if (n % 2 != 0) {
            tong += n;
        }
    }

    printf("Tong cac so le la: %d\n", tong);

    return 0;
}

