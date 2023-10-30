#include <stdio.h>

int main () {
	int n;
	printf ("Nam(-10^6 <= n <= 10^6):");
	scanf ("%d", &n);
	
	if (n <= 0) {
		printf ("INVALID");
	} else if (n % 400 == 0 || n % 4 == 0 &n % 100 != 0) {
		printf ("YES");
	} else {
		printf ("NO");
	}
	return 0;
}
