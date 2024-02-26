#include "Span.hpp"

int main(void)
{
	try
	{
		Span	test(6);

		test.addNumber(0);
		test.addNumber(102);
		test.addNumber(200);
		test.addNumber(300);
		test.addNumber(400);
		test.addNumber(500);

		for (int i = 0; i < 6; i++)
			std::cout << test.getNumber(i) << " ";
		std::cout << std::endl;
		std::cout << "Longest distance -> " << test.longestSpan() << std::endl;
		std::cout << "Shortest distance -> " << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : " << e.what() << '\n';
	}
	// try
	// {
	// 	Span	test2(10);
	// 	std::vector<int>	vector_to_add;

	// 	vector_to_add.push_back(42);
	// 	vector_to_add.push_back(-42);
	// 	vector_to_add.push_back(25);
	// 	vector_to_add.push_back(13);
	// 	vector_to_add.push_back(2);
	// 	test2.addRange(vector_to_add.begin(), vector_to_add.end());

	// 	for (int i = 0; i < 8; i++)
	// 		std::cout << test2.getNumber(i) << " ";
	// 	std::cout << std::endl;
	// 	std::cout << "Longest distance -> " << test2.longestSpan() << std::endl;
	// 	std::cout << "Shortest2 distance -> " << test2.shortestSpan() << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << "Error : " << e.what() << '\n';
	// }

	return (0);
}
