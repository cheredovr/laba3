#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
using namespace std;
class vl
{
private:
	string min = "";
	string max = "";
public:
	vl();
	~vl();
	string getmin();
	string getmax();
	void initvl(string MIN, string MAX);
	void inputvl();
	void outvl();
	void deletevl();

};