#include <stdio.h>
#define max 100
#include <math.h>
void nhapmang(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		printf("phan tu thu %d la : ", i);
		scanf_s("%d", &a[i]);
	}
}
void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
}

//                                           SAP XEP
//sap xep
void hoanvi(int &x, int &y)//phai la tham bien
{
	int z = x;
	x = y;
	y = z;
}
void sapxep(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)//phai cho j = i + 1
		{
			if (a[i] > a[j])
			{
				hoanvi(a[i], a[j]);
			}

		}
	}
}
//ham sap xep so chan so le giu nguyen

void sapxep1(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)//phai cho j = i + 1
		{
			if (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j])
			{
				hoanvi(a[i], a[j]);
			}

		}
	}
}
//ham sap xep duong giam khong duong tang
// x duong y am =>đ
// x duong y duong => sapxepgiam
// x am y am => sap xeptang
// x am y duong => hoan vi
void sapxep2(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)//phai cho j = i + 1
		{
			if ((a[i] > 0 && a[j] > 0 && a[i] < a[j]) || (a[i] <= 0 && a[j] > 0) || (a[i] < 0 && a[j] < 0 && a[i] > a[j]))
			{
				hoanvi(a[i], a[j]);
			}

		}
	}
}

//ham sap xep duong giam =>0=> am tang
/*
x d y a -- đ
x d y o -- đ
x d y d -- sapxepgiam
x o y d -- hoan vi
x o y a --đ
x o y o-- đ
x a y d --hoan vi
x a y a -- sapxxeptang
x a y o -- hoan vi
*/

//                                              CHÈN XOÁ
//ham chen so vao vi trí bất kì
void chen(int a[], int &n, int x, int vt)// khi chen so phan tu n se thay doi
{
	for (int i = n - 1; i >= vt; i--)
	{
		a[i + 1] = a[i];      //so sau bang so trc
	}
	a[vt] = x;
	++n; //thay doi n
}

// ham xoa phan tu
void xoa(int a[], int &n, int vt)//co &
{
	for (int i = vt; i < n - 1; i++) //i<n-1 vi khi xoá nó giảm 1
	{
		a[i] = a[i + 1];
	}
	--n; //thay doi n
}
//ham chen so 2 vao sau so chan
void chen2(int a[], int &n)// khi chen so phan tu n se thay doi
{
	for (int i = n - 1; i >= 0; i--) //chay nguoc vì neu chay xuoi thi se them lien tuc k ngung
	{
		if (a[i] % 2 == 0)
		{
			chen(a, n, 2, i + 1);  //i+1 vì chen sau vt i
		}
	}
}
//ham xoa so le
void xoa2(int a[], int &n)
{
	for (int i = n - 1; i >= 0; i--)    //chay nguoc vi i se thay doi khi xoa pt dau tien
	{
		if (a[i] % 2 != 0)
		{
			xoa(a, n, i);
		}
	}
}
//xoa lien tuc tu cac phan tu tu mot vt k cho trk
void xoa3(int a[], int &n, int vt)
{
	for (int i = n - 1; i >= vt; i--)    //chay nguoc vi i se thay doi khi xoa pt dau tien
	{
		xoa(a, n, i);
	}
}

//                                                    TÌM KIẾM
//ham tim so co abs min khac 0
int vtkhackhongdautien(int a[], int n)
{
	int vt = -1;                  //cho sai
	for (int i = 0; i < n; i++)
	{
		if (a[i] != 0)
		{
			vt = i; break;   //tim có là dừng ngay
		}
	}
	return vt;
}

int vtabsmin(int a[], int n)
{
	int vt = vtkhackhongdautien(a, n);
	if (vt == -1)
	{
		return -1;
	}
	else
	{
		int vtmin = vt;
		for (int i = vt + 1; i < n; i++)
		{
			if (abs(a[i]) < abs(a[vtmin]) && a[i] != 0)
			{
				vtmin = i;
			}
		}
		return vtmin;
	}
}
//cach 2
int timvitrikhac0(int a[], int n)
{
	int vtmin = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != 0)
		{
			if (vtmin = -1 || (vtmin != -1 && abs(a[i]) < abs(a[vtmin])))
			{
				vtmin = i;
			}
		}
	}
	return vtmin;
}

//ham tim vt sao cho |x-a[i]| min
int timvtmin(int a[], int n)
{
	int vt = 0;
	for (int i = 0; i < n; i++)
	{
		if (abs(10 - a[i]) < abs(10 - a[vt]))
		{
			vt = i;
		}
	}
	return vt;
}

//hàm tìm chỉ số i  sao cho 𝑎[𝑖 ] bằng gấp đôi tổng số các phần tử còn lại trong mảng.
//a[i]=2(s-a[i])  
int timvti(int a[], int n)
{
	int s = 0, vt = -1;
	for (int i = 0; i < n; i++)
	{
		s = s + i;
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 2 * (s - a[i]))
		{
			vt = i; break;
		}
	}
	return vt;
}

//ham kiem tra mang co doi xung k?
int ktdoixung(int a[], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		if (a[i] != a[n - 1 - i])
		{
			return 0;
		}
	}
	return 1;
}



































