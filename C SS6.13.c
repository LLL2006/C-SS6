#include <stdio.h>

int main() {
    int d, m;

    printf("Nhap ngay sinh: ");
    scanf("%d", &d);
    printf("Nh?p tháng sinh: ");
    scanf("%d", &m);

    if ((m == 3 && d >= 21) || (m == 4 && d <= 19)) {
        printf("Cung hoang dao cua ban la Bach Duong.\n");
    } else if ((m == 4 && d >= 20) || (m == 5 && d <= 20)) {
        printf("Cung hoang dao cua ban la Kim Nguu.\n");
    } else if ((m == 5 && d >= 21) || (m == 6 && d <= 20)) {
        printf("Cung hoang dao cua ban la Song Tu.\n");
    } else if ((m == 6 && d >= 21) || (m == 7 && d <= 22)) {
        printf("Cung hoang dao cua ban la Cu Giai.\n");
    } else if ((m == 7 && d >= 23) || (m == 8 && d <= 22)) {
        printf("Cung hoang dao cua ban la Su Tu.\n");
    } else if ((m == 8 && d >= 23) || (m == 9 && d <= 22)) {
        printf("Cung hoang dao cua ban la Xa Nu.\n");
    } else if ((m == 9 && d >= 23) || (m == 10 && d <= 22)) {
        printf("Cung hoang dao cua ban la Thien Binh.\n");
    } else if ((m == 10 && d >= 23) || (m == 11 && d <= 21)) {
        printf("Cung hoang dao cua ban la Bo Cap.\n");
    } else if ((m == 11 && d >= 22) || (m == 12 && d <= 21)) {
        printf("Cung hoang dao cua ban la Nhan Ma.\n");
    } else if ((m == 12 && d >= 22) || (m == 1 && d <= 19)) {
        printf("Cung hoang dao cua ban la Ma Ket.\n");
    } else if ((m == 1 && d >= 20) || (m == 2 && d <= 18)) {
        printf("Cung hoang dao cua ban la Bao Binh.\n");
    } else if ((m == 2 && d >= 19) || (m == 3 && d <= 20)) {
        printf("Cung hoang dao cua ban la Song Ngu.\n");
    }

    return 0;
}

