#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
using namespace std;
class setacc
{
private:
	string name = ""; //Имя
	string surname = ""; //Фамилия
	string email = ""; //Почта
	string password = ""; //Пароль
public:
	setacc();
	string getname();
	string getsurname();
	string getemail();
	string getpassword();
	~setacc();
	void initacc(string NAME, string SURNAME, string EMAIL, string PASSWORD);
	void inputacc();
	void outacc();
	void deleteacc();
};