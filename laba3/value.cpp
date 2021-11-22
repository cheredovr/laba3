#include "value.h"
vl::vl()
{
	string min = "";
	string max = "";
}
string vl::getmin()
{
	return this->min;
}

string vl::getmax()
{
	return this->max;
}
void vl::initvl(string MIN, string MAX)
{
	this->min = MIN;
	this->max = MAX;
}
void vl::inputvl()
{
	printf_s("Please enter a min value: ");
	cin >> min;
	printf_s("Please enter a max value: ");
	cin >> max;
}
void vl::outvl()
{
	if ((min[0] == 0) && (max[0] == 0))
	{
		printf_s("Empty - Empty");
	}
	else
	{
		cout << min << " - " << max << endl;
	}
	printf_s("\n");
}