#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
using namespace std;
class ob
{
private:
	string university = "";
	string special = "";
public:
	ob();
	~ob();
	string getuniversity();
	string getspecial();
	void initob(string UNIVERSITY, string SPECIAL);
	void inputob();
	void outob();
	void deleteob();
};