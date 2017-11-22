#include <stdio.h>
#define max 100
typedef struct
{
	int x;
	int y;
} diem2D;
void nhapdiem();

//bai 1
void nhap(float a[], int &n)
{
	printf("nhap mang:\n");
	printf("nhap n:");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("nhap phan tu thu %d:", i);
		scanf_s("%f", &a[i]);
	}
}
//bai 2
void nhapsoduong(int b[], int &n)
{
	printf("\n nhap mang gom n so duong\n");
	printf("nhap n:");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("nhap phan tu thu %d:", i);
		scanf_s("%d", &b[i]);
		if (b[i] < 0)
		{
			printf("nhap lai so duong:");
			i--;
		}
		else continue;
	}
}
//bai3
void nhapdiem()
{
	diem2D pA;
	printf("nhap x: ");
	scanf_s("%d", &pA.x);
	printf("nhap y: ");
	scanf_s("%d", &pA.y);
	printf("(%d,%d)\n", pA.x, pA.y);

}

//bai 4
void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%f\t", a[i]);

	}
}
//bai 5
void xuatsochan(int b[], int n)
{
	int i = n - 1;
	while (i >= 0)
	{
		if (b[i] % 2 == 0)
			printf("%d\t", b[i]);
		i--;

	}
}

//bai 6
bool ktnguyento(int n)
{
	int k = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			k++;
	}
	if (k == 2)
		return true;
	else
		return false;
}

//bai 6
int demsnt(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktnguyento((int)a[i]))
			dem++;
		else continue;
	}
	return dem;
}

//bai 7
float tbcongsochan(int b[], int n)
{
	float x;
	float s = 0, dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (b[i] % 2 == 0)
		{
			dem++;
			s = s + b[i];
		}
		else continue;
	}
	x = s / dem;
	return x;
}

//bai 8
int kiemtramangchan(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if ((int)a[i] % 2 != 0)
			return 0;
		else continue;

	}
	return 1;
}

//bai 9
int kiemtramang(float a[], int n, float &k)
{

	for (int i = 0; i < n; i++)
	{
		if ((int)a[i] % 2 != 0 || a[i] < k)
			return 0;
		else continue;

	}
	return 1;
}

// bai 10
void daomang(float a[], int n, float c[])
{
	for (int i = n - 1; i >= 0; i--)
	{
		int j = 0;
		c[j] = a[i];
		printf("%f\t", c[j]);
		j++;
	}
}

//bai 11
void tachsoduong(float a[], int n, float c[], int &nc)
{
	nc = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i]>0)
		{
			c[nc] = a[i];
			nc++;
		}
		else continue;
	}
}
//bai 12

void nhap1(float d[], int &nd)
{
	printf("nhap nd:");
	scanf_s("%d", &nd);
	for (int i = 0; i < nd; i++)
	{
		printf("nhap phan tu thu %d:", i);
		scanf_s("%f", &d[i]);
	}
}
// bai 12
void rapmang(float a[], int n, float d[], int nd, float c[], int &nc)
{
	nc = n + nd;
	for (int i = 0; i < n; i++)
	{
		c[i] = a[i];
	}
	for (int i = 0; i < nd; i++)
	{
		c[n + i] = d[i];
	}

}

//bai 13
void timsln(float a[], int n)
{
	float solonnhat = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > solonnhat)
			solonnhat = a[i];
	}
	printf("so lon nhat la:%f\n", solonnhat);
}

// bai 14
int vtamdautien(float a[], int n)
{
	int vt = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			vt = i;
			break;
		}
		return vt;
	}
}


int vtamlonnhat(float a[], int n)
{
	int vtamdau = vtamdautien(a, n);
	if (vtamdau == -1)
	{
		return -1;
	}
	else
	{
		int vtammax = vtamdau;
		for (int i = vtamdau + 1; i < n; i++)
		{
			if (a[i] < 0 && a[i]> a[vtammax])
			{
				vtammax = i;
			}
		}
		return vtammax;
	}
}

void hoanvi(float &x, float &y)
{
	float z = x;
	x = y;
	y = z;
}

//bai 15

void timsonn(float a[], int n)
{
	if (a[0] != 0)
	{
		float sonhonhat = a[0];
		for (int i = 1; i < n; i++)
		{
			if (a[i] < sonhonhat && a[i] != 0)
				sonhonhat = a[i];
		}
		printf("so thuc nho nhat khac 0 la:%f\n", sonhonhat);
	}
	else
	{
		float sonhonhat = a[1];
		for (int i = 2; i < n; i++)
		{
			if (a[i] < sonhonhat && a[i] != 0)
				sonhonhat = a[i];
		}
		printf("so thuc nho nhat khac 0 la:%f\n", sonhonhat);
	}
}

//bai 16
void sapxepmang(float a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (a[i]>a[j])
			{
				hoanvi(a[i], a[j]);
			}

		}
	}
}


void main()
{

	//NHAP XUAT MANG
	//bai 1
	float a[max], c[max], d[max];
	int b[max];
	int n, nc, nd;
	float k;
	printf("bai 1:\n");
	nhap(a, n);
	//bai2

	printf("bai 2:\n");
	nhapsoduong(b, n);
	//bai 3
	printf("bai 3: nhap toa do cho cac diem trong mang");
	diem2D pA;
	printf("nhap n: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		nhapdiem();
	}
	//bai4
	printf("bai 4:\n");
	nhap(a, n);
	xuat(a, n);
	// bai 5
	printf("\n bai 5:\n");
	nhapsoduong(b, n);
	xuatsochan(b, n);

	//DEM TINH TOAN
	printf("\n bai 6:\n");
	printf("dem so nguyen to\n");
	nhap(a, n);
	int x = demsnt(a, n);
	printf("so nguyen to co trong mang a la:%d\n", x);
	//tinh trung binh cong cac so chan trong mang
	printf("bai 7\n");
	printf("tinh trung binh cong so chan co trong mang\n");
	nhapsoduong(b, n);
	float j = tbcongsochan(b, n);
	printf("tinh trung binh cong cac so chan trong mang la: %f\n", j);

	//KIEM TRA TINH CHAT CUA MANG
	//bai 8
	printf("bai 8\n");
	printf("kiem tra mang co phai toan so chan\n");
	nhap(a, n);
	if (kiemtramangchan(a, n) == 1)
	{
		printf("mang toan so chan\n");
	}
	else printf("mang co so le\n");
	//bai 9
	printf("bai 9\n");
	printf("kiem tra mang co phai toan so chan lon hon k\n");
	printf("nhap k: ");
	scanf_s("%f", &k);
	nhap(a, n);
	if ((kiemtramang(a, n, k)) == 1)
	{
		printf("mang toan so chan lon hon %f\n", k);
	}
	else printf("cac so trong mang khong thoa man yeu cau bai toan\n");
	// bai 10
	printf("bai 10: dao mang\n");
	nhap(a, n);
	daomang(a, n, c);
	//bai 11
	printf("\n bai11: tach so duong cua mang a qua mang b\n");
	nhap(a, n);
	tachsoduong(a, n, c, nc);
	xuat(c, nc);

	//bai 12
	printf("\n bai12: rap mang a va mang b\n");
	nhap(a, n);
	nhap1(d, nd);
	rapmang(a, n, d, nd, c, nc);
	xuat(c, nc);
	// bai 13
	printf("\n bai13: tim so lon nhat trong mang\n");
	nhap(a, n);
	timsln(a, n);
	//bai 14
	printf("\n bai14: tim so am  lon nhat trong mang\n");
	nhap(a, n);
	if (vtamlonnhat(a, n) == -1)
	{
		printf("day khong co so am\n");
	}
	else
	{
		int m = vtamlonnhat(a, n);
		for (int i = 0; i < n; i++)
		{
			if (i == m)
				printf("so am lon nhat la: %f", a[i]);

		}

	}
	//bai 15
	printf("\n bai 15: tim so thuc nho nhat khac 0 trong mang\n");
	nhap(a, n);
	timsonn(a, n);
	//bai 16
	printf("\n bai16: sap xep mang theo thu tu tang dan\n");
	nhap(a, n);
	sapxepmang(a, n);
	xuat(a, n);
}










