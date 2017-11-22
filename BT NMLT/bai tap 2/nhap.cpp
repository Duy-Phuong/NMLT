#include <stdio.h>

void nhap(int a[], int &n)
{
	printf("nhap n: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n)
{
	if (n == 0)
		return;
	
	xuat(a, n - 1);
	printf("%d\t", a[n - 1]);
}

void hoanvi(int &x, int &y)
{
	int t = x;
	x = y; 
	y = t;
}
void daomang(int a[], int vt1, int vt2)
{
	if (vt1 >= vt2)
		return;
	hoanvi(a[vt1], a[vt2]);
	daomang(a, vt1 + 1, vt2 - 1);
}
void main()
{
	int a[100], n;
	nhap(a, n);
	xuat(a, n);
	daomang(a, 0, n -1);
	printf("\nket qua: \n");
	xuat(a, n);
}