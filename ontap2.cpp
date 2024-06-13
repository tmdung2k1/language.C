#include<stdio.h>
#define MAX 100
#include<math.h>



int ktnt(int n)
{
	if(n < 2) return 0;
	int count = 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) count++;
	}
		if(count == 0) return 1;
	return 0;
}

int main()
{
	int n;
	printf("nhap so can kiem tra: "); scanf("%d", &n); 
	int t = ktnt(n);
	printf("\n%s", t ? "la so nguyen to" : "k la so nguyen to");
	
	return 0; 
	
}
