#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

std::string parsefile(std::string filename, std::string s1, std::string s2)
{
	int index;
	std::ifstream infile;
	std::string line;
	std::string content;
	infile.open(filename.c_str());

	if(infile)
	{
		std::ostringstream ss;
		ss << infile.rdbuf();
		content = ss.str();
	}
	if(s1.compare(s2))
	{
		while((index = content.find(s1)) != -1)
		{
			content.erase(index, s1.size());
			content.insert(index, s2);
		}
	}
	infile.close();
	return (content);
}

void	printToFile(std::string filename, std::string content)
{
	std::ofstream outfile((filename += ".replace").c_str());
	outfile << content;
	outfile.close();
}

int  prnNext(std::string errorMsg)
{
	std::cout << errorMsg << std::endl;
	return(0);
}

int main(int argc, char **argv)
{
	if(argc != 4)
		return(prnNext("Wrong Number Of Args !!"));
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	if(!s1.size() || !s2.size())
		return(prnNext("Wrong Args !!"));
	std::string content = parsefile(filename, s1, s2);
	printToFile(filename, content);
	return (0);
}