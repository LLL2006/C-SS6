#include <stdio.h>
#include <string.h>

int main () {
	char matKhauDung[] = "121206";
	char matKhauNhap[50];
	
	printf("Nhap mat khau (121206): ");
	scanf("%s", matKhauNhap);
	
	if (strcmp(matKhauDung, matKhauNhap) == 0) {
		printf("Mat khau chinh xac.\n");
	} else {
		printf("Mat khau sai.\n");
	}
	
	return 0;
}
