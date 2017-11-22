#include <iostream>
#include<amp_graphics.h>
#include<stdlib.h>
#include<dos.h>
#include<Windows.h>
using namespace std;
void caythong(int n);
int main()
{
	int n;
	system("color A");
	cout << "Nhap so tang cay thong Noel (10 - 15) : ";
	cin >> n;
	caythong(n);
	system("PAUSE");
}
void caythong(int n)
{
	srand(time(NULL));
	while (1)
	{
		for (int j = 1; j <= 5; j++)
		{
			system("cls");
			int a = rand() % (15 - 5 + 1) + 5, b = rand() % (15 - 5 + 1) + 5, c = rand() % (15 - 5 + 1) + 5;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			for (int i = 1; i < n; i++)
				cout << " ";
			cout << "/\\" << endl;
			for (int i = 1; i < n - 1; i++)
				cout << " ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "/";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
			cout << "*o";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "\\" << endl;
			for (int i = 1; i < n - 2; i++)
				cout << " ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "/";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
			cout << "'o'o";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "\\" << endl;
			for (int i = 1; i < n - 3; i++)
				cout << " ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "/";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
			cout << "*o*o*o";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "\\" << endl;
			for (int i = 1; i < n - 4; i++)
				cout << " ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "/";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
			cout << "'o'o'o'o";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "\\" << endl;
			for (int i = 1; i < n - 5; i++)
				cout << " ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "/";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
			cout << "*o*";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), b);
			cout << "MERRY";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
			cout << "*o";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "\\" << endl;
			for (int i = 1; i < n - 6; i++)
				cout << " ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "/";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
			cout << "'o'o'o'o'o'o";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "\\" << endl;
			for (int i = 1; i < n - 7; i++)
				cout << " ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "/";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
			cout << "*o*";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), b);
			cout << "CHRISTMAS";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
			cout << "*o";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "\\" << endl;
			for (int i = 9; i < n; i++)
			{
				if (i % 2 == 1)
				{
					for (int j = 1; j < (n - i + 1); j++)
						cout << " ";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
					cout << "/";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
					for (int j = 1; j < i; j++)
						cout << "'o";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
					cout << "\\" << endl;
				}
				else
				{
					for (int j = 1; j < (n - i + 1); j++)
						cout << " ";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
					cout << "/";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
					for (int j = 1; j < i; j++)
						cout << "*o";
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
					cout << "\\" << endl;
				}
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "/";
			if (n % 2 == 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
				for (int i = 1; i < (n - 2) / 2; i++)
					cout << "*o";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				cout << "|    |";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
				for (int i = 1; i < (n - 2) / 2; i++)
					cout << "o*";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				cout << "\\" << endl;
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
				for (int i = 1; i < (n - 2) / 2; i++)
					cout << "'o";
				cout << "'";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				cout << "|    |";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
				cout << "'";
				for (int i = 1; i < (n - 2) / 2; i++)
					cout << "o'";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				cout << "\\" << endl;
			}
			for (int i = 1; i <= (n - 5); i++)
				cout << " ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "__|    |__" << endl << endl;
			for (int i = 1; i <= (2 * n - 18) / 2; i++)
				cout << " ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), b);
			cout << "GIANG SINH AN LANH" << endl << endl;
			Sleep(400);
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "We "; Beep(384, 500);
		cout << "wish "; Beep(512, 500);
		cout << "you "; Beep(512, 250);
		cout << "a "; Beep(575, 250);
		cout << "Mer"; Beep(512, 250);
		cout << "ry "; Beep(483, 250);
		cout << "Christ"; Beep(430, 500);
		cout << "mas.\n"; Beep(430, 500);

		cout << "We "; Beep(430, 500);
		cout << "wish "; Beep(575, 500);
		cout << "you "; Beep(575, 250);
		cout << "a "; Beep(645, 250);
		cout << "Mer"; Beep(575, 250);
		cout << "ry "; Beep(512, 250);
		cout << "Christ"; Beep(483, 500);
		cout << "mas.\n"; Beep(384, 500);

		cout << "We "; Beep(384, 500);
		cout << "wish "; Beep(645, 500);
		cout << "you "; Beep(645, 250);
		cout << "a "; Beep(683, 250);
		cout << "Mer"; Beep(645, 250);
		cout << "ry "; Beep(575, 250);
		cout << "Christ"; Beep(512, 500);
		cout << "mas.\n"; Beep(430, 500);

		cout << "And "; Beep(384, 250);
		cout << "a "; Beep(384, 250);
		cout << "Hap"; Beep(430, 500);
		cout << "py "; Beep(575, 500);
		cout << "New "; Beep(483, 500);
		cout << "Year.\n" << endl; Beep(512, 1000);
		Sleep(500);


		cout << "Good "; Beep(384, 500);
		cout << "tid"; Beep(512, 500);
		cout << "ings "; Beep(512, 500);
		cout << "to "; Beep(512, 500);
		cout << "you\n"; Beep(483, 1000);

		cout << "Wher"; Beep(483, 500);
		cout << "e"; Beep(512, 500);
		cout << "ver "; Beep(483, 500);
		cout << "you "; Beep(431, 500);
		cout << "are.\n"; Beep(384, 1000);

		cout << "Good "; Beep(575, 500);
		cout << "Tid"; Beep(645, 500);
		cout << "ings "; Beep(575, 500);
		cout << "for "; Beep(512, 500);
		cout << "Christ"; Beep(767, 500);
		cout << "mas\n"; Beep(384, 500);

		cout << "And "; Beep(384, 250);
		cout << "a "; Beep(384, 250);
		cout << "Hap"; Beep(431, 500);
		cout << "py "; Beep(575, 500);
		cout << "New "; Beep(484, 500);
		cout << "Year !" << endl << endl; Beep(512, 1000);
		//cout << "Made by QUAN LE & BAO QUYET.";
		Sleep(1000);
	}
}
