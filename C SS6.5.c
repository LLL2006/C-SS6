#include <stdio.h>

int main() {
    int y, m, d;

    printf("Nhap nam: ");
    scanf("%d", &y);
    printf("Nhap thang: ");
    scanf("%d", &m);

    if (m < 1 || m > 12) {
        printf("Thang khong hop le.\n");
        return 1;
    }

    if (m == 2) {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
            d = 29;
        } else {
            d = 28;
        }
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        d = 30;
    } else {
        d = 31;
    }

    printf("Thang %d nam %d co %d ngay.\n", m, y, d);

    return 0;
}

