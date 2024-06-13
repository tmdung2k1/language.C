#include<stdio.h>
void nhap(int &a, int &b)
{
	printf("nhap so a: "); scanf("%d", &a);
	printf("nhap so b: "); scanf("%d", &b);
}
void hoanvi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a, b;
	nhap(a, b);
	hoanvi(a, b);
	printf("ket qua la: \n a = %d\n b = %d", a, b);
	
	return 0;
}

