# include<iostream>
# include<fstream>
# include<sstream>
# include<string>
# include<cstdlib>

void replaceContent(std::string &content, std::string s1, std::string s2)
{
	int index;
	int current_index = 0;

	if(s1.compare(s2))
	{
		while((index = content.find(s1, current_index)) != -1)
		{
			current_index = index + s2.length();			
			content.erase(index, s1.size());
			content.insert(index, s2);
		}
	}
}

std::string parseFile(std::string filename)
{
	std::ifstream infile;
	std::string line;
	std::string content;

	infile.open(filename.c_str());

	if (infile.fail())
	{
		std::cerr << "Error While Opening File" << std::endl;
		exit(EXIT_FAILURE);
	}

	std::ostringstream ss;
	if(!(ss << infile.rdbuf()))
	{
		std::cout << "Reading faild, could be a directory" << std::endl;
		exit(EXIT_FAILURE);
	}

	content = ss.str();
	infile.close();
	
	return (content);
}

void printToFile(std::string filename, std::string content)
{
	std::ofstream outfile((filename += ".replace").c_str());
	outfile << content;
	outfile.close();
}

int  prnError(std::string errorMsg)
{
	std::cerr << errorMsg << std::endl;
	return(1);
}

int main(int argc, char **argv)
{
	if(argc != 4)
		return(prnError("Wrong Number Of Args !!"));

	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	if(!s1.size() || !s2.size())
		return(prnError("Wrong Args !!"));

	std::string content = parseFile(filename);
	replaceContent(content, s1, s2);
	printToFile(filename, content);

	return (0);
}
