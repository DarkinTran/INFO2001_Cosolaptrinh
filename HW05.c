#include <stdio.h>

int main () {
	int a, b;
	printf ("Nhap 2 so nguyen a va b voi b != 0(-10^9 <=a, b <=10^9):", a, b);
	scanf ("%d %d", &a, &b);
	
	int c, d, e;
	float f;
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	printf ("Tong hieu tich thuong la: %d %d %lld %.2f", c, d, e, f);
	return 0;
}
