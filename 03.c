#include <stdio.h>
#define PI 3.14

int Chuvihinhtron (int a) {
	int C = a*2*PI;
	return C;
}

int Dientichhinhtron (int b) {
	int S = b*b*PI;
	return S;
}

int main () {
	int r;
	int Chuvi;
	int Dientich;
	printf ("Nhap ban kinh:");
	scanf ("%d", &r);
	Chuvi = Chuvihinhtron(r);
	Dientich = Dientichhinhtron(r);
	printf ("Chu vi hinh tron la: %d\n",Chuvi);
	printf ("Dien tich hinh tron la: %d\n",Dientich);
	return 0;
}
