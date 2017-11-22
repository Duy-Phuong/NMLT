#include <stdio.h>
bool SNT(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			dem++;
		}
	}
	return (dem == 2);
}

void xuatsnt(int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		if (SNT(i))
		{
			printf("day la snt: %d\n", i);
		}
	}
}
void main()
{
	int a, b;
	FILE* fp;
	fp = fopen("INPUT.txt", "r");
	fscanf(fp, "%d", &a);
	fscanf(fp, "%d", &b);
	xuatsnt(a, b);
	//printf("%d %d\n", a, b);

	fclose(fp);
	
}