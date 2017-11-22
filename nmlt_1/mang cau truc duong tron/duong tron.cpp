#include <stdio.h>
#include <math.h>
typedef struct
{
	float x, y;
}diem2d;

struct duongtron
{
	float bankinh;
	diem2d tam;
};

void nhap(diem2d &a)
{
	printf("nhap x: ");
	scanf_s("%f", &a.x);
	printf("nhap y: ");
	scanf_s("%f", &a.y);
}

void nhapndiem(diem2d a[], int &n)
{
	printf("nhap n: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		nhap(a[i]);
	}
}
void nhapduongtron(duongtron &c)
{
	printf("nhap tam: ");
	nhap(c.tam);
	printf("nhap ban kinh: ");
	scanf("%d", &c.bankinh);

}

float tinhkc(diem2d a, diem2d b)
{
	return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

int kiemtra(duongtron c, diem2d a)
{
	return(tinhkc(c.tam, a) < c.bankinh);
}

int dem(duongtron c, diem2d a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (kiemtra(c, a[i]))
		{
			dem++;
		}
	}
	return dem;
}

void main()
{
	//float a[100];
	int n;
	duongtron c;
	diem2d a[100];
	nhapndiem(a, n);
	nhapduongtron(c);
	printf("kq la %f\n", dem(c, a, n));

}
