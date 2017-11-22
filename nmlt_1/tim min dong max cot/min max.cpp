#include <stdio.h>
void nhap(int a[][100], int &d, int &c)
{
	printf("nhap so dong: ");
	scanf_s("%d", &d);
	printf("nhap so cot: ");
	scanf_s("%d", &c);
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("nhap phan tu a[%d][%d]: ", i, j);
			scanf_s("%d", &a[i][j]);

		}
	}
}
void xuat(int a[][100], int d, int c)
{
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

void MaxDong(int a[][100], int d, int c, int b[], int& k) {
	int max;
	k = 0;
	for (int i = 0; i < d; i++) {
		max = a[i][0];
		for (int j = 0; j < c; j++) {
			if (a[i][j] > max)
				max = a[i][j];
		}
		b[k++] = max;
	}
}
void MaxCot(int a[][100], int d, int c, int b[], int& k) {
	int max;
	k = 0;
	for (int j = 0; j < c; j++) {
		max = a[0][j];
		for (int i = 0; i < d; i++) {
			if (a[i][j] > max)
				max = a[i][j];
		}
		b[k++] = max;
	}
}
void MinDong(int a[][100], int d, int c, int z[], int &nd)
{
	nd = 0;
	int min_dong;
	for (int i = 0; i < d; i++)
	{
		min_dong = a[i][0];
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] < min_dong)
			{
				min_dong = a[i][j];
			}
		}
		z[nd] = min_dong;
		nd++;
	}

}
void xuat1(int b[], int k)
{
	for (int i = 0; i < k; i++)
	{
		printf("%d\t", b[i]);
	}
}


void timphantunndong(int a[100][100], int d, int c, int b[], int &k)
{
	int jmin, imin;
	k = 0;
	for (int i = 0; i < d; i++)
	{
		int min_dong = a[i][0];
		jmin = 0; imin = 0;
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] < min_dong)
			{
				min_dong = a[i][j];
				jmin = j; imin = i;
			}

		}
		///tim pt min tren dong
		int kt = 1;
		for (int k = 0; k < d; k++)
		{
			if (a[k][jmin] > min_dong)
			{
				kt = 0;
			}
			if (kt == 1)
			{
				b[k] = min_dong;
				k++;
			}
		}
	}
}

void DemMangConTangDan(int a[], int n) {
	int b[100], k = 0;
	//---- Dem so mang con tang dan
	for (int i = 0; i < n - 1; i++)
	for (int j = i + 1; j < n; j++) {
		if (a[j] < a[i])
			break;
		else { // a[j] >= a[i]
			if (a[j] >= a[j - 1])
				b[k++] = j - i + 1;
		}
	}
	printf("\nSo mang con tang dan la: %d ", k);
	//	int M = Max(b, k);
	//----Tim mang con tang dan dai nhat

	printf("\nMang con tang dan co chieu dai lon nhat la: ");
	for (int i = 0; i < n - 1; i++)
	for (int j = i + 1; j < n; j++) {
		if (a[j] < a[i])
			break;
		else {
			//			if (a[j] > a[j - 1] && j - i + 1 == M)
			for (int l = i; l <= j; l++)
				printf("%d, ", a[l]);
		}
	}
}

void MaxDong(int a[][100], int d, int c, int b[], int& k) {
	int max;
	k = 0;
	for (int i = 0; i < d; i++) {
		max = a[i][0];
		for (int j = 0; j < c; j++) {
			if (a[i][j] > max)
				max = a[i][j];
		}
		b[k++] = max;
	}
}
void MaxCot(int a[][100], int d, int c, int b[], int& k) {
	int max;
	k = 0;
	for (int i = 0; i < c; i++) {
		max = a[0][i];
		for (int j = 0; j < d; j++) {
			if (a[j][i] > max)
				max = a[j][i];
		}
		b[k++] = max;
	}
}



void main()
{
	int a[100][100], d, c;
	int b[100], k;
	int z[100], nd;
	nhap(a, d, c);
	xuat(a, d, c);
	/*MaxCot(a, d, c, b, k);
	xuat1(b, k);
	MinDong(a, d, c, z, nd);
	xuat1(z, nd);*/
	timphantunndong(a, d, c, b, k);
	xuat1(b, k);
}