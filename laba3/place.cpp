#include "place.h"
place::place()
{
	string country = "";
	string city = "";
}
string place::getcountry()
{
	return this->country;
}

string place::getcity()
{
	return this->city;
}
void place::initpl(string COUNTRY, string CITY)
{
	this->country = COUNTRY;
	this->city = CITY;
}
void place::inputpl()
{
	printf_s("Please enter a country: ");
	cin >> country;
	printf_s("Please enter a city: ");
	cin >> city;
}
void place::outpl()
{
	if ((country[0] == 0) && (city[0] == 0))
	{
		printf_s("Empty - Empty");
	}
	else
	{
		cout << country << " - " << city << endl;
	}
	printf_s("\n");
}
place::~place()
{
	;
}