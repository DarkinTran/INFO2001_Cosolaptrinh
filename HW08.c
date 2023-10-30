#include <stdio.h>
#include <math.h>

int main () {
	int x1, y1, x2, y2;
	printf ("Nhap toa do cua 2 diem (-10^6 <=xi, yi <= 10^6 ");
	scanf ("%d %d %d %d", &x1, &y1, &x2, &y2);
	
	float khoang_cach = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	printf ("Khoang cach la: %.2f\n", khoang_cach );
	return 0;
}
