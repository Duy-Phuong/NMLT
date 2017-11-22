#include <stdio.h>
#include <math.h>
#define max 100

void nhapmang2chieu(int a[][max], int &hang, int &cot)
{
	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf("nhap phan tu a[%d][%d]  ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void xuatmang2chieu(int a[][max], int hang, int cot)
{
	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf("%d\t", a[i][j]);

		}
		printf("\n");
	}
}
int tonghang(int a[][max], int k, int cot)
{
	int tong = 0;
	for (int i = 0; i < cot; i++)
	{
		tong += a[k][i];
	}
	return tong;
}
int tongDCchinh(int a[][max], int cot)
{
	int tong = 0;
	for (int i = 0; i < cot; i++)
	{
		tong += a[i][i];
	}
	return tong;
}

//bai 322 tinh tong tren 1 hang
float tinhtongdongk(float a[][max], int k, int cot)
{
	float tong = 0;
	for (int j = 0; j < cot; j++)
	{
		tong = tong + a[k][j];
	}
	return tong;
}

//bai 327 tinh tong bien
float tinhtongbien(float a[][max], int hang, int cot)
{
	float tong = 0;
	//tinh tong hang dau va cuoi
	for (int j = 0; j < cot; j++)
	{
		tong += a[0][j] + a[hang - 1][j];
	}
	// tinh tong cot dau va cuoi (bo di hai o dau)
	for (int i = 1; i < hang - 1; i++)
	{
		tong += a[i][0] + a[i][cot - 1];
	}
	return tong;
}

//bai 328 tinh trung binh nhan cac so duong
float tinhcanbac_n(float x, int n)
{
	return pow(x, (float)1 / n);
}

float tinhtrungbinhnhan(float a[][max], int hang, int cot)
{
	float tich = 1;
	int dem = 0;
	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (a[i][j] >= 0)
			{
				tich *= a[i][j];
				dem++;
			}
		}
	}
	return tinhcanbac_n(tich, dem);

}

//bai 329
void biendoi(float a[][max], int hang, int cot)
{
	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (a[i][j] < 0)
			{
				a[i][j] = fabs(a[i][j]);// hoac a[i][j]*=-1; fabs trị tuyệt dối số thực
			}
		}
	}

}
/// KI THUAT DEM
// dem so chu so có trong ma tran các so nguyen duong
int demsoluongchusocuax(float x)
{
	int dem = 0;
	while (x != 0)
	{
		x = x / 10;
		dem++;
	}
	return dem;
}


int demchuso(float a[][max], int hang, int cot)
{
	int dem = 0;
	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			dem += demsoluongchusocuax(a[i][j]);

		}
	}
	return dem;
}


void main()
{
	int a[max][max];
	int n, hang, cot;
	printf("nhap so hang: ");
	scanf("%d", &hang);
	printf("nhap so cot: ");
	scanf("%d", &cot);
	nhapmang2chieu(a, hang, cot);
	xuatmang2chieu(a, hang, cot);
}