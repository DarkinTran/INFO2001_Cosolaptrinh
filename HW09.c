#include <stdio.h>

int main () {
	int n;
	int a = 0;
	printf ("n:");
	scanf ("%d", &n);
	int i;
	for ( i = 1; i <= n; i++) {
		a += i;
	}
	printf ("Tong la: %d", a);	
	return 0;
}
