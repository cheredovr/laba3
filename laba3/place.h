#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
using namespace std;
class place
{
private:
	string country = "";
	string city = "";
public:
	place();
	~place();
	string getcountry();
	string getcity();
	void initpl(string COUNTRY, string CITY);
	void inputpl();
	void outpl();
	void deletepl();
};
