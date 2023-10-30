#include <stdio.h>

int main () {
	#define PI 3.14
	int r;
	printf ("Nhap ban kinh duong tron (1 <= r <= 106): ", r);
	scanf ("%d", &r);
	
	float C, S;
	C = 2 * PI * r;
	S = PI * r*r;
	printf ("Chu vi va Dien tich hinh tron la: %.2f %.2f", C, S);
	return 0;
}
