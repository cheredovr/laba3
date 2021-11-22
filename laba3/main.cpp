#include"exit.h"
#include "obr.h"
#include "place.h"
#include "setacc.h"
#include "value.h"
#include "string"
#include "Windows.h"
int menu()
{
	int i;
	system("cls");
	printf_s("  1) set account\n  2) obrazovanie\n  3) place\n  4) value\n  5) Exit and Delete\n  0) Exit the program\n\n  Choose: ");
	scanf_s("%d", &i);
	return i;
}
int main()
{
	//setacc
	string nameA = "Akakiy"; //Имя
	string surnameA = "Champ"; //Фамилия
	string emailA = "Akakiy22@gmail.com"; //Почта
	string passwordA = "132456798"; //Пароль
	setacc*User=new setacc;
	//obr
	string universityF = "ALTGTU";
	string specialF = "PI";
	ob* us = new ob;
	//place
	string countryF = "Russia";
	string cityF = "Barnaul";
	place*cc=new place;
	//value
	string minF = "15000";
	string maxF = "1500000";
	vl* mm = new vl;


	int g = 0; 
	int f = 1; 
	int n;

	do
	{
		switch (menu())
		{
		case 0:
		{
			f = 0;
			break;
		}
		case 1: //setacc
		{
			do
			{
				system("cls");
				printf_s("\n  1 - Initialization\n  2 - Input\n  3 - Output\n  0 - Exit\n\n  Choose: ");
				scanf_s("%d", &n);
				if (n == 1)
				{
					(*User).initacc(nameA, surnameA, emailA, passwordA);
					g = 1;
				}
				if (n == 2)
				{
					(*User).inputacc();
					g = 1;
				}
				if (n == 3)
				{
					(*User).outacc();
					system("pause");
				}
			} while (n != 0);
			break;
		}
		case 2: //obr
		{
			if (g) {
				do
				{
					system("cls");
					printf_s("\n  1 - Initialization\n  2 - Input\n  3 - Output\n  4 - Delete\n  0 - Exit\n\n  Choose: ");
					scanf_s("%d", &n);
					if (n == 1)
					{
						(*us).initob(universityF, specialF);
						g = 1;
					}
					if (n == 2)
					{
						(*us).inputob();
						g = 1;
					}
					if (n == 3)
					{
						(*us).outob();
						system("pause");
					}
					if (n == 4)
					{
						(*us).deleteob();
						system("cls");
						printf_s("\n DELETED!!!\n\n");
						system("pause");
					}
				} while (n != 0);
			}
			break;
		}
		case 3: //place
		{
			if (g)
			{
				do
				{
					system("cls");
					printf_s("\n  1 - Initialization\n  2 - Input\n  3 - Output\n  4 - Delete\n  0 - Exit\n\n  Choose: ");
					scanf_s("%d", &n);
					if (n == 1)
					{
						(*cc).initpl(countryF, cityF);
						g = 1;
					}
					if (n == 2)
					{
						(*cc).inputpl();
						g = 1;
					}
					if (n == 3)
					{
						(*cc).outpl();
						system("pause");
					}
					if (n == 4)
					{
						(*cc).deletepl();
						system("cls");
						printf_s("\n DELETED!!!\n\n");
						system("pause");
					}
				} while (n != 0);
			}
			break;
		}
		case 4: //value
		{
			if (g) {
				do
				{
					system("cls");
					printf_s("\n  1 - Initialization\n  2 - Input\n  3 - Output\n  4 - Delete\n  0 - Exit\n\n  Choose: ");
					scanf_s("%d", &n);
					if (n == 1)
					{
						(*mm).initvl(minF, maxF);
						g = 1;
					}
					if (n == 2)
					{
						(*mm).inputvl();
						g = 1;
					}
					if (n == 3)
					{
						(*mm).outvl();
						system("pause");
					}
					if (n == 4)
					{
						(*mm).deletevl();
						system("cls");
						printf_s("\n DELETED!!!\n\n");
						system("pause");
					}
				} while (n != 0);
			}
			break;
		}
		case 5: //Удаление и выход из аккаунта
		{
			do
			{
				system("cls");
				printf_s("\n  1 - Delete and Exit\n  0 - Exit\n\n  Choose: ");
				scanf_s("%d", &n);
				if (n == 1)
				{
					(*User).deleteacc();
					(*us).deleteob();
					(*cc).deletepl();
					(*mm).deletevl();
					system("cls");
					printf_s("\n DELETED!!!\n\n");
					system("pause");
					g = 0;
				}
			} while (n != 0);
			break;
		}
		}
	} while (f);
	delete User;
	delete us;
	delete cc;
	delete mm;
}
