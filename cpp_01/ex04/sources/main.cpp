// Create a program that takes three parameters in the following order: a filename and
// two strings, s1 and s2.
// It will open the file <filename> and copies its content into a new file
// <filename>., replacing every occurrence of s1 with s2.
// Using C file manipulation functions is forbidden and will be considered cheating. All
// the member functions of the class std::string are allowed, except . Use them
// wisely!
// Of course, handle unexpected inputs and errors. You have to create and turn in your
// own tests to ensure your program works as expected.

#include "FileReplacer.hpp"

int	main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error : 3 parameters excepted" << std::endl;
		return (-1);
	}

	FileReplacer	fileReplacer(argv[1]);

	fileReplacer.replaceFile(argv[2], argv[3]);
	
	return (0);
}
