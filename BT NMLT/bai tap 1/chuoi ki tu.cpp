#include <stdio.h>
#include <string.h>

int STRLEN(char *s)
{
	int dem = 0;
	while (s[dem] != '\0')
	{
		dem++;
	}
	return dem;
}

void STRCPY(char* s1, char* s2)
{
	int length = STRLEN(s2);
	for (int i = 0; i < length; i++)
	{
		s1[i] = s2[i];
	}
	s1[length] = '\0';
}

char* STRUPR(char *s)
{
	char* p = strdup(s);
	int length = STRLEN(s);
	for (int i = 0; i < length; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] -= 32;
		}
	}
	return p;
}


void Xoa(char *a, int vitrixoa)
{
	int n = STRLEN(a);
	for (int i = vitrixoa; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	a[n - 1] = '\0';
}

void xoakhoangtrangthua(char* s)
{
	int n = STRLEN(s);
	for (int i = 0; i < n; i++)
	{
		if (s[i] == ' ' && s[i + 1] == ' ')
		{
			Xoa(s, i);
			i--;
			n--;
		}
	}
	//xoa dau
	if (s[0] == ' ')
	{
		Xoa(s, 0);
		n--;
	}
	//xoa cuoi
	if (s[n - 1] == ' ')
	{
		Xoa(s, n - 1);
		n--;
	}
}

void viethoakitudau(char* s)
{
	int n = STRLEN(s);
	for (int i = 0; i < n; i++)
	{
		if (s[i] == ' ' && s[i + 1] != 0)
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
		}
	}
	if (s[0] != ' ')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] -= 32;
		}
	}
}

void main()
{
	char p[100];
	char s[100] = "duy   phuong  ";
	int k = STRLEN(s);
	printf("chuoi nhap la: %s\n", s);
	printf("chuoi co so ki tu la: %d\n", k);
	//STRCPY(p, s);
	//STRCPY(p, STRUPR(s));
	//Xoa(s, 1);
	//xoakhoangtrangthua(s);
	viethoakitudau(s);
	printf("chuoi sau khi copy la: %s\n", s);

}