#include <stdio.h>
void main()
{
	char a[100], b[100];
	FILE* fp;
	fp = fopen("INPUT.txt", "rt");
	fscanf(fp,"%[^\tt]\t", a);   //  /tt là doc toi dau cach, toi cuoi dong phai bo qua dau \n
	fscanf(fp, "%[^\n]\n", b);
	
	printf("%s\n", a);
	printf("%s\n", b);
	fclose(fp);
}