#include "setacc.h"
setacc::setacc()
{
	name = ""; 
	surname = ""; 
	email = ""; 
	password = ""; 
}
string setacc::getname()
{
	return this->name;
}
string setacc::getsurname()
{
	return this->surname;
}
string setacc::getemail()
{
	return this->email;
}
string setacc::getpassword()
{
	return this->password;
}
void setacc::initacc(string NAME, string SURNAME, string EMAIL, string PASSWORD)
{
	this->name = NAME;
	this->surname = SURNAME;
	this->email = EMAIL;
	this->password = PASSWORD;
}
void setacc::inputacc()
{
	printf_s("\nPlease enter a name: ");
	cin >> name;
	printf_s("\nPlease enter a surname: ");
	cin >> surname;
	printf_s("\nPlease enter a email: ");
	cin >> email;
	printf_s("\nPlease enter a password: ");
	cin >> password;
}
void setacc::outacc()
{
	if ((name[0] == 0) && (surname[0] == 0) && (email[0] == 0) && (password[0] == 0))
	{
		printf_s("\nName: empty");
		printf_s("\nSurname: empty");
		printf_s("\nEmail: empty");
		printf_s("\nPassword: empty");
	}
	else
	{
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Email: " << email << endl;
		cout << "Password: " << password << endl;
	}
	printf_s("\n");
}
setacc::~setacc()
{
	;
}