#include <iostream>

// int main()
// {
// 	std::cout << "Hello world !"  << "How are you ?" << std::endl;
// 	std::cout << "Bye !" << std::endl;
// 	return 0;
// }

int	main (int argc, char **argv)
{
	std::string is_secure = argv[1];

	std::cout << is_secure;
	if (argc != 2)
		std::cout << "wrong nuber of arguments" << std::endl;
	return (0);
}
