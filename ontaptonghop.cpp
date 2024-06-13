#include<stdio.h>
#define MAX 100
#include<math.h>

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

void ktnt(int a[],int n)
{
	printf("\ncac so nguyen to trong mang la: ");
	for(int i = 0; i < n; i++)
	{
		int dem = 0;
		for(int j = 2; j < a[i] / 2; j++)
			if(a[i] % j == 0) dem++;
	if(dem == 0 && a[i] > 1) printf("%4d", a[i]); 
	}
	printf("\n-----------------------------------------------------------------");
}
void ktcp(int a[], int n)
{
	int dem = 0;
	printf("\n cac so chinh phuong la: ");
	for(int i = 0; i < n; i++)
	{ 
		int temp = sqrt(a[i]);
		if(temp * temp == a[i]) 
		{
			dem++;
			printf("%4d", a[i]);	
		}
		if(dem == 0) printf("k co so chinh phuong nao trong mang"); 
	}
}
int main()
{
	int a[MAX], n;
	nhapmang(a, n);
	xuatmang(a, n);
	ktnt(a, n);
	ktcp(a, n);
}
