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

int demso(int a[], int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0) dem++;
	}
	return dem;
}
int main()
{
	int a[MAX], n, dem = 0;
	nhapmang(a, n);
	xuatmang(a, n);
	int t = demso(a, n);
	printf("\nso chan trong mang la: %d", t);
	
	return 0;
}
