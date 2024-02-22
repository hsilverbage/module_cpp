#include "Array.hpp"


int main()
{
	try
	{
		Array<int> test(5);

		for (int i = 0; i < test.size(); i++)
			test[i] = i;
		for (int i = 0; i < test.size(); i++)
			std::cout << test[i] << " ";
		std::cout << std::endl;

		std::cout << "Attempting to access test[10]..." << std::endl;
		test[10] = 42;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
