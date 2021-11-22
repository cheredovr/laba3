#pragma once
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
#include"place.h"
#include "setacc.h"
#include "value.h"
#include "obr.h"
using namespace std;
class Exit
{
private:
	string null = "";
	int noll = 0;
public:

	Exit();

	~Exit();
	string Getnull();
	int Getnoll();
};
