#include <stdio.h>
int main() {
	float tienGoc = 1000;
	int n;
	float laiSuat = 0.01;
	float tienLai;
	
	printf("So thang gui la: \n");
	scanf("%d",&n);
	
    for(int i =1; i <= n; i++){
    	tienGoc=tienGoc+tienGoc*laiSuat;
    	
	}
	printf("Tien lai la: %.3f\n", tienLai=tienGoc -1000);
	printf("Tien nhan dc la: %.3f\n", tienGoc);
	
	return 0;
}
