#include<stdio.h>

int increase10(int *x){
    *x = *x + 10;
    return *x;
}

int main(){
	int a = 10;
	printf("Ket qua thay doi la: %d\n", increase10(&a));
	printf("a van la: %d", a);
	return 0;
}
