#include "Span.hpp"

int main(void)
{
	std::cout << "\n\t\tTEST 1 :\n" << std::endl;
	try
	{
		Span	test(6);

		test.addNumber(0);
		test.addNumber(102);
		test.addNumber(200);
		test.addNumber(300);
		test.addNumber(400);
		test.addNumber(500);

		for (unsigned int i = 0; i < test.getNbElem(); i++)
			std::cout << test.getNumber(i) << " ";
		std::cout << std::endl;
		std::cout << "Longest distance -> " << test.longestSpan() << std::endl;
		std::cout << "Shortest distance -> " << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : " << e.what() << '\n';
	}
	std::cout << "\n\t\tTEST 2 :\n" << std::endl;
	try
	{
		Span	test2(15000);
		std::vector<int>	vector_to_add;

		test2.addNumber(123);
		test2.addNumber(321);

		for (unsigned int i = 0; i < 10000; i++)
			vector_to_add.push_back(i * 50);

		test2.addRange(vector_to_add.begin(), vector_to_add.end());

		for (unsigned int i = 0; i < test2.getNbElem(); i++)
			std::cout << test2.getNumber(i) << " ";
		std::cout << std::endl;

		std::cout << "Longest distance -> " << test2.longestSpan() << std::endl;
		std::cout << "Shortest2 distance -> " << test2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : " << e.what() << '\n';
	}

	return (0);
}
