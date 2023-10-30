#include <stdio.h>

int main () {
	int n;
	printf ("n:");
	scanf ("%d", &n);
	
	if (-1018 <= n <= 1018 &n % 3 ==0 &n % 5 ==0) {
		printf ("1");
	}	else {
		printf ("0");
	}
	return 0;
}
