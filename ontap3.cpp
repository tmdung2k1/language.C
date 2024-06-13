#include<stdio.h>
#define MAX 100
#include<math.h>

int ktcp(int n)
{
	int i = sqrt(n);
	if(i * i == n) return 1;
	return 0;
}

int main()
{
	int n, i;
	printf("nhap so can kiem tra: "); scanf("%d", &n);
	int t = ktcp(n);
	printf("%s", t ?"la so chinh phuong" : "k la so chinh phuong");
	
	return 0;
}
