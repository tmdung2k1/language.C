#include<stdio.h>

void nhap(int &n)
{
	printf("nhap so can kiem tra: "); scanf("%d", &n);
}

int catso(int n)
{
	int d, s = 0;
	do
	{
		d = n % 10;
		s += d;
		n /= 10;
	}
	while(n != 0);
	return s;
}

int main()
{
	int n;
	nhap(n);
	int t = catso(n);
	printf("tong so bi cat la: %d", t);
	
	return 0;
}
