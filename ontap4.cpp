#include<stdio.h>

int ktht(int n)
{
	int s = 0;
	for(int i = 1; i <= n / 2; i++)
	{
		if(n % i == 0)  s += i;
	}
	if(s == n) return 1;
	return 0;
}

int main()
{
	int n, s = 0;
	printf("nhap so can kiem tra: "); scanf("%d", &n);
	
	int t = ktht(n);
	printf("%s", t ?"la so hoan thien" : "khong la so hoan thien");
	
	return 0;
}
