#include <stdio.h>
//int isEven(int m){
//	if (m %2 == 0){
//		return 1;
//	}else {
//		return 0;
//	}
//}

int addTwoNumbers (int m, int n){
	int sum = m +n;
	return sum;
}
int main () {
	//Input
	int a, b;
	int sumX10;
	printf ("Nhap a, b:");
	scanf ("%d %d", &a, &b);
	//Process
	sumX10 = addTwoNumbers(a, b)*10;
	printf ("Tong hai so la: %d",sumX10);
	return 0;
}
