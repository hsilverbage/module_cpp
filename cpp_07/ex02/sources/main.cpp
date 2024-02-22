#include "Array.hpp"


int main()
{
	std::cout << "\n\t\tTEST 1 : INT\n" << std::endl;
	try
	{
		Array<int> test(5);
		Array<int> test2(20);

		for (int i = 0; i < test.size(); i++)
			test[i] = i;
		for (int i = 0; i < test.size(); i++)
			std::cout << test[i] << " ";
		std::cout << std::endl;
		for (int i = 0; i < test2.size(); i++)
			test2[i] = i * -1;
		for (int i = 0; i < test2.size(); i++)
			std::cout << test2[i] << " ";
		std::cout << "\nSetting test2[10] to 42 and attempting to access it : ";
		test2[10] = 42;
		std::cout << test2[10] << std::endl;
	
		std::cout << "Attempting to access test[10]" << std::endl;
		std::cout << test[10] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n\t\tTEST 2 : STRING\n" << std::endl;
	try
	{
		Array<std::string>	test3(4);

		test3[0] = "Hello";
		test3[1] = ",";
		test3[2] = "world";
		test3[3] = "!";
		for (int i = 0; i < test3.size(); i++)
			std::cout << test3[i] << " ";
		std::cout << std::endl;

		Array<std::string>	test4(test3);
		
		for (int i = 0; i < test4.size(); i++)
			std::cout << test4[i] << " ";
		std::cout << "\nAttempting to access test3[10]" << std::endl;
		test3[10] = "fail";
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n\t\tTEST 1 : DOUBLE\n" << std::endl;
	try
	{
		Array<double>	test5(10);

		for (int i = 0; i < test5.size(); i++)
			test5[i] = i * 0.66;
		for (int i = 0; i < test5.size(); i++)
			std::cout << test5[i] << " ";
		std::cout << std::endl;

		Array<double>	test6;

		test6 = test5;
		for (int i = 0; i < test6.size(); i++)
			std::cout << test6[i] << " ";

		std::cout << "\nAttempting to access test5[20]" << std::endl;
		test5[10] = 3.14;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
