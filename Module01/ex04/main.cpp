#include <iostream>
#include <fstream>
#include <string>

int	error_args(void)
{
	std::cout << "4 args only" << std::endl;
	return (-1);
}

int	empty_args(void)
{
	std::cout << "Empty word" << std::endl;
	return (-1);
}
int main(int argc, char **argv)
{
	if (argc != 4)
		return (error_args());
	std::fstream	filename;
	std::string		contentFile;
	filename.open(argv[1], std::ios::in);
	if (filename.is_open())
	{
		std::string line;
		while (getline(filename, line))
		{
			if (!contentFile.empty())
				contentFile += '\n';
			contentFile += line;
		}
		filename.close();
	}
	else
		return (-1);
	std::string	toReplace = argv[2];
	std::string	newWord = argv[3];
	if (toReplace.empty())
		return (empty_args());
	else if (toReplace == newWord)
		return (-1);
	for (int pos = contentFile.find(toReplace); pos >= 0; pos = contentFile.find(toReplace))
	{
		contentFile.erase(pos, toReplace.length());
		contentFile.insert(pos, newWord);
	}
	filename.open(argv[1], std::ios::out);
	if (filename.is_open())
	{
		filename << contentFile;
		filename.close();
	}
	return (0);
}
