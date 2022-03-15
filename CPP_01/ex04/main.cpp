#include <fstream>
#include <iostream>

int main()
{
	
	std::ifstream infile;
	std::ofstream outfile;
	std::string line;
	std::string content;

	infile.open("testfile.txt");
	outfile.open("outputfile1");

	while (getline(infile, line)) 
	{
			std::cout << line;
			content.append(line);
			content.append("\n");
	}
		outfile << content;
}