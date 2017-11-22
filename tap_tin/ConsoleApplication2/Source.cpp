#include <stdio.h>
typedef struct
{
	char mssv[50];
	char name[50];
	char gioi[50];
	char date[50];
	float diem;

}am;
void main()
{
	am a;
	
	FILE* fileIn;
	fileIn = fopen("INPUT.txt", "r");
	fscanf(fileIn,"%[^-]-%[^(](%[^)\t])\t%[^\t]\t%f\n", &a.mssv, &a.name, &a.gioi, &a.date, &a.diem);// phai co xuong dong \n
	printf("ket qua la: %s\n", a.date);
	printf("diem la: %f\n", a.diem);
	fclose(fileIn);
	/*int a = 10;
	int b = 20;
	FILE* fileout;
	fileout = fopen("OUTPUT.txt", "w");
	fprintf(fileout,"%d", a);
	fprintf(fileout,"%d", b);
	fclose(fileout);*/
	
}