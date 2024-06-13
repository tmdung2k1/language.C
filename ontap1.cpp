#include<stdio.h>
#define MAX 100

void nhapmang(int a[], int &n)
{
	do
	{
		printf("nhap so phan tu: "); scanf("%d", &n);
	}
	while(n <= 0 || n > MAX);
	for(int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i); scanf("%d", &a[i]);
	}
}
void xuatmang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}

int main()
{
	int a[MAX], n;
	
	nhapmang(a, n);
	xuatmang(a ,n);
}
