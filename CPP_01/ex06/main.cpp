#include "Harl.hpp"

int prnNext(std::string errorMsg)
{
	std::cout << errorMsg << std::endl;
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (prnNext("Wrong Args"));
	Harl hObject;
	std::string levels[4] = {"debug", "info", "warning", "error"};
	for (int i = 0 ; i < 4; i++)
	{
		if(!levels[i].compare(argv[1]))
		{
			while(i<4)
			{
				hObject.complain(levels[i]);
				i++;
			}
			break;
		}
		if(i == 3)
			std::cout << "Level Was not found !" << std::endl;
	}
	return (0);
	

	
}