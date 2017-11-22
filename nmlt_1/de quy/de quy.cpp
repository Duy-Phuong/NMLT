#include <stdio.h>
#include <math.h>

//bai 1: 1+2+...+n
int tong(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return (tong(n - 1) + n);
}
//bai 2: 1^2+2^2+....+n^2
int tong2(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return(tong2(n - 1) + n*n);
}
// bai 3: 1+ 1/2 +....+1/n
float tong3(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return (tong3(n - 1) + 1.0 / n);// phai cho 1.0
}

//bai4:  1/2+1/4+....+1/2n
float tong4(int n)
{
	if (n == 1)
	{
		return 1.0 / 2;
	}
	return (tong4(n - 1) + 1.0 / (2 * n));
}
// bai5 : 1+1/3+1/5+...+1/2n+1
float tong5(int n)
{
	if (n == 0)//cho 0 vì số đàu là 1 nên bắt đầu bằng 0
	{
		return 1;
	}
	return (tong5(n - 1) + 1.0 / (2 * n + 1));

}

//bai 6: 1/1*2 + 1/2*3 +....+ 1/n*(n+1) 
float tong6(int n)
{
	if (n == 1)
	{
		return 1.0 / 2;
	}
	return (tong6(n - 1) + 1.0 / (n * (n + 1)));
}
//bai7 : 1/2 +2/3+ .....+ n/n+1
float tong7(int n)
{
	if (n == 1)
	{
		return 1.0 / 2;
	}
	return(tong7(n - 1) + ((float)n / (n + 1)));
	/// phsn so tử phải float
}
//bai8:  1/2+3/4+5/6+...+2n+1/2n+2
float tong8(int n)
{
	if (n == 0)
	{
		return 1.0 / 2;
	}
	return (tong8(n - 1) + ((float)(2 * n + 1) / (2 * n + 2)));
}

//bai 9: 1*2*...*n
float tich(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return (tich(n - 1)*n);
}
//bai 10: x^n
float tinht(int n, float x)
{
	return (pow(x, n));
}
//bai 11: 1+1*2+ ... +1*2*..*n
float tong11(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return (tong11(n - 1) + tich(n));

}
//bai 12: x +x^2+...+x^n
float tong12(int n, float x)
{
	if (n == 1)
	{
		return x;
	}
	return(tong12(n - 1, x) + tinht(n, x));
}

//bai 13: x^2+x^4+...+ x^2*n
float tong13(int n, float x)
{
	if (n == 1)
	{
		return x*x;
	}
	return(tong13(n - 1, x) + tinht(2 * n, x));
}


