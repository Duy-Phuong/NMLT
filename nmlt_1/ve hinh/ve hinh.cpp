#include <stdio.h>
#include <math.h>
typedef struct
{
	int x, y;
}diem2d;
void xuatkt(char c, int n, bool coxuongdong)
{
	for (int i = 1; i <= n; i++)
	{
		printf("%c", c);
	}
	if (coxuongdong)
	{
		printf("\n");
	}
}

void HCN_dac(int d, int r)
{
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= d; j++)
		{
			printf("*  ");
		}
		printf("\n");
	}

}
void HCN_rong(int d, int r)
{
	for (int i = 1; i <= r; i++)
	{
		if (i == 1 || i == r)
		{
			for (int j = 1; j <= d; j++)
			{
				printf("*  ");
			}

		}

		else
		{
			for (int j = 1; j <= d; j++)
			{
				if (j == 1 || j == d)
				{
					printf("*  ");
				}
				else printf("   ");
			}

		}
		printf("\n");
	}
}

void xuatkitu(char c, int n, bool coxuongdong)
{
	for (int i = 1; i <= n; i++)
	{
		printf("%c", c);
	}
	if (coxuongdong)
	{
		printf("\n");
	}

}

void tamgiaccand(int cao)
{
	//dong 1
	xuatkitu(' ', cao - 1, false);
	xuatkitu('*', 2 - 1, true);
	//giua


	for (int i = 2; i <= cao; i++)
	{
		if (i == cao)
		{
			xuatkitu('*', 2 * cao - 1, true);
		}
		else
		{
			xuatkitu(' ', cao - i, false);
			xuatkitu('*', 2 * i - 1, true);
		}
	}
}
void tamgiaccandac(int cao)
{
	for (int i = 1; i <= cao; i++)
	{
		xuatkitu(' ', cao - i, false);
		xuatkitu('*', 2 * i - 1, true);
	}
}
void tamgiaccanrong(int cao)
{
	//dong 1
	xuatkitu(' ', cao - 1, false);
	xuatkitu('*', 1, true);
	//dong 2 den dong cao - 1
	for (int i = 2; i <= cao - 1; i++)
	{
		xuatkitu(' ', cao - i, false);
		xuatkitu('*', 1, false);
		xuatkitu(' ', 2 * i - 3, false);
		xuatkitu('*', 1, true);
	}
	//dong cuoi cung
	xuatkitu('*', 2 * cao - 1, true);
}
void vetamgiaccand(int h)
{
	//dong 1
	xuatkt(' ', h - 1, false);
	xuatkt('*', 1, true);
	//giua+cuoi
	for (int i = 2; i <= h; i++)
	{
		xuatkt(' ', h - i, false);
		xuatkt('*', 2 * i - 1, true);
	}

}
void tamgiaccanrong(int h)
{
	//dong 1
	xuatkt(' ', h - 1, false);
	xuatkt('*', 1, true);
	//giua
	for (int i = 2; i <= h; i++)
	{
		xuatkt(' ', h - i, false);
		xuatkt('*', 1, false);
		xuatkt(' ', 2 * i - 3, false);
		xuatkt('*', 1, true);
		if (i == h)
		{
			xuatkt('*', 2 * i - 1, true);
		}
	}

}
void nhap(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		printf("nhap phan tu thu %d:", i);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
}
void nhap2d(diem2d p[], int n)
{

	for (int i = 0; i < n; i++)
	{
		printf("nhap x: ");
		scanf("%d", &p[i].x);
		printf("nhap y: ");
		scanf("%d", &p[i].y);
		printf("(%d, %d)\n", p[i].x, p[i].y);
	}
}
void hoanvi(int &x, int &y)
{
	int t = x;
	x = y;
	y = t;
}

void daomang(int a[], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		hoanvi(a[i], a[n - 1 - i]);
	}

}
int timammax(int a[], int n)
{
	int vtaln = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			if (vtaln = -1 || (vtaln != -1 && a[i]> a[vtaln]))
			{
				vtaln = i;
			}
		}
	}
	return vtaln;
}

void main()
{
	diem2d p[100];
	int a[100];
	int h, n;
	printf("nhap n: ");
	scanf("%d", &n);
	//tamgiaccanrong(h);
	nhap(a, n);
	//daomang(a, n);
	int c = timammax(a, n);
	if (c == -1)
	{
		printf("mang khong co so am\n");
	}
	else
		printf("vi tri am lon nhat la: %d", c);
	//xuat(a, n);
	//nhap2d(p, n);

}























