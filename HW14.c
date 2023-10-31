#include <stdio.h>

int main () {
	int n;
	printf ("Nhap n(0<=n<=10^18):");
	scanf ("%d", &n);
	
	int even_sum=0,odd_sum=0;
	
	while ( n > 0) {
		int digit = n % 10;
		if (digit %2 == 0) {
			even_sum += digit;
		} else {
			odd_sum += digit;
		}
		n/=10;
	}
	
	printf ("Tong chu so chan la: %d\n", even_sum);
	printf ("Tong chu so le la: %d", odd_sum);
	return 0;
}
