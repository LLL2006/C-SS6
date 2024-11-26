#include <stdio.h>
int main() {
	printf("Moi ban nhap so de tim uoc: ");
	int n;
	int i;
	scanf("%d", &n);
	for(i=1; i <= n; i++) {
		if(n%i == 0){
			printf("Uoc cua so la: %d\n",i);
		}
	}
	return 0;
}
