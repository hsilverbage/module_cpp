// Create a program that takes three parameters in the following order: a filename and
// two strings, s1 and s2.
// It will open the file <filename> and copies its content into a new file
// <filename>.replace, replacing every occurrence of s1 with s2.
// Using C file manipulation functions is forbidden and will be considered cheating. All
// the member functions of the class std::string are allowed, except replace. Use them
// wisely!
// Of course, handle unexpected inputs and errors. You have to create and turn in your
// own tests to ensure your program works as expected.

#include <iostream>
#include <fstream>

int	main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error : 3 parameters excepted" << std::endl;
		return (-1);
	}

	std::fstream file(argv[1], std::ios::in); // Open a file for writing (out mode)

	if (file.is_open()) // File opened successfully, do something with it
	{
		file >> "Hello, C++ File I/O!\n"; // For example, write some data to the file
		file.close(); // Close the file when done
	} else {
		// Unable to open the file
		std::cerr << "Error opening file\n";
	}
	return (0);
}
