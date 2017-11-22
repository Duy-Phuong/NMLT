#include <stdio.h>
void hoanvi(int *x, int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}

//toán tử trỏ
typedef struct
{
	int tu;
	int mau;
}PHANSO;

void main()
{
	PHANSO ps1, *ps2 = &ps1; //**phai truyen cho nó dia chi và khi thuc hiên j lenh thì ps1 cx thay doi theo

	/*int a = 5;
	int *pa = &a;
	printf("%d\n", &pa);// dia chi bien
	printf("%d\n", pa);// gia tri pa
	printf("%d\n", *pa);// gia tri vung nho pa tro den
	int a = 5;
	int b = 6;
	hoanvi(&a, &b);
	printf("a = %d && b = %d\n", a, b);
	*/

	/*
	ps1.tu = 1;
	ps1.mau = 2;
	printf("\ntu so la: %d, mau so la: %d\n", ps1.tu, ps1.mau);
	(*ps2).tu = 2;
	(*ps2).mau = 3;
	printf("\ntu so la: %d, mau so la: %d\n", (*ps2).tu, (*ps2).mau);
	printf("\ntu so la: %d, mau so la: %d\n", ps1.tu, ps1.mau);
	*/

	int a[3] = { 1, 3, 6 };
	int *p = a; //p == &a[0]
	int *e = &a[1];
	int *f = &a[2];
	printf("gia tri cua p tro den: %d, gia tri cua p: %d\n", *p, p);
	printf("gia tri cua e tro den: %d, gia tri cua e: %d\n", *e, e);
	printf("gia tri cua f tro den: %d, gia tri cua f: %d\n", *f, f);
	//p += 2;  // bằng *(p + 2) == p[2] == a[2]
	//p[2] = *(p + 2);// trong khi xuat ra man hinh thi phai ghi p[2]
	printf("gia tri cua p tro den: %d, gia tri cua p: %d\n", p[2], &p[2]);
	printf("gia tri cua p tro den: %d, gia tri cua p: %d\n", *(p + 2), &(*(p + 2)));
	p += 2;
	printf("gia tri cua p tro den: %d, gia tri cua p: %d\n", *p, p);
}