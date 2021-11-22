#include"exit.h"

Exit::Exit() //Конструктор
{
	null = "";
	noll = 0;
}
string Exit::Getnull()
{
	return this->null;
}
int Exit::Getnoll()
{
	return this->noll;
}
void setacc::deleteacc()
{
	Exit ex;
	string null;
	null = ex.Getnull();
	this->name = null;
	this->surname = null;
	this->email = null;
	this->password = null;
}
void ob::deleteob()
{
	Exit ex;
	string null;
	null = ex.Getnull();
	this->university = null;
	this->special = null;
}
void place::deletepl()
{
	Exit ex;
	string null;
	null = ex.Getnull();
	this->country = null;
		this->city = null;
}
void vl::deletevl()
{
	Exit ex;
	string null;
	null = ex.Getnull();
	this->min = null;
	this->max = null;
}
Exit::~Exit() //Деструктор
{
	;
}
