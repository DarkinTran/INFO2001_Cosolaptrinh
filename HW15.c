#include <stdio.h>

int main () {
	int n;
	printf ("Nhap n(0<=n<=10^18):");
	scanf ("%d", &n);
	
	int even_count = 0, odd_count = 0;
	while (n > 0) {
		int digit = n %10;
		if (digit %2 == 0) {
			even_count++;
		} else {
			odd_count++;
		}
		n /= 10;
	}
	if (even_count == odd_count) {
		printf ("YES");
	} else {
		printf ("NO");
	}
	return 0;
}
