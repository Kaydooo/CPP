#include "Harl.hpp"

int main()
{
	Harl hObject;
	hObject.complain("debug");
	hObject.complain("error");
	hObject.complain("warning");
	hObject.complain("info");
	hObject.complain("WrongLevel");
	hObject.complain("DEBUG");
}