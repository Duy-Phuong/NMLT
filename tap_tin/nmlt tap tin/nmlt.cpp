#include <stdio.h>

void In(FILE* f, FILE* outFile)
{
	char ch;
	/*while (1)
	{
		ch = fgetc(f);
		if (!feof(f))
		{
			fputc(ch, outFile);
		}
		else
			break;
	}*/
	while (!feof(f))
	{
		ch = fgetc(f);
		fputc(ch, outFile);
	}
}

int demsotu(FILE* inflie)
{
	/*char* tu[100];
	int i = 0;
	int dem = 0;
	while (!feof(inflie))
	{
		int k = fscanf(inflie, "%s", tu[i++]);
		if (k > 0)
		{
			dem++;
		}
		else 
			break;
	}*/
	int dem = 0;
	int k = 1;
	char a[100];
	while (!feof(inflie))
	{
		fscanf(inflie, "%[^\tt]\t", a);
		if (k != NULL)
		{
			dem++;
		}
		else
			break;
	}
	return dem;
}
void main()
{
	FILE* f;
	char* filename = "data.txt";
	f = fopen(filename, "rt");
	if (f == NULL)
		printf("that bai\n");
	In(f, stdout);
	int z = demsotu(f);
	printf("\nso tu la: %d\n", z);
	fclose(f);
}