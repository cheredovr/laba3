#include "obr.h"

ob::ob()
{
	string university = "";
	string special = "";
}
string ob::getuniversity()
{
	return this->university;
}

string ob::getspecial()
{
	return this->special;
}
void ob::initob(string UNIVERSITY, string SPECIAL)
{
	this->university = UNIVERSITY;
	this->special = SPECIAL;
}
void ob::inputob()
{
	printf_s("Please enter a university: ");
	cin >> university;
	printf_s("Please enter a special: ");
	cin >> special;
}
void ob::outob()
{
	if ((university[0] == 0) && (special[0] == 0))
	{
		printf_s("Empty - Empty");
	}
	else
	{
		cout << university << " - " << special << endl;
	}
	printf_s("\n");
}
ob::~ob()
{
	;
}