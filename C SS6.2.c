#include <stdio.h>
int main() {
	int n;
	int soChan = 0;
	int soLe = 0;
	
	printf("Nhap vao 5 so nguyen: \n");
	for (int i = 1; i <= 5; i++) {
		printf("So thu %d: ", i);
		scanf("%d", &n);
		
		if (n % 2 == 0) {
			soChan++;
		} else {
			soLe++;
		}
	}
	
	printf("So luong so chan la: %d \n", soChan);
	printf("So luong so le la: %d \n", soLe);
	
	return 0;
}
