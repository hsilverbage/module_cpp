#include "Base.hpp"
#include <ctime>
#include <iostream>

Base*	generate(void)
{
	clock_t		ticks = clock();
	std::time_t	currentTime = std::time(NULL);

	std::srand(static_cast<unsigned int>(currentTime) * 1000 + ticks);

	int random = std::rand() % 3;

	switch (random)
	{
		case 0 :
			std::cout << "A has been created" << std::endl;
			return (new A);
			break;
		case 1 :
			std::cout << "B has been created" << std::endl;
			return (new B);
			break;
		case 2 :
			std::cout << "C has been created" << std::endl;
			return (new C);
			break;
	}
	return NULL;
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Identify using a pointer : A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Identify using a pointer : B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Identify using a pointer : C" << std::endl;
	else
		std::cout << "Something fucked up in ptr identification" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A& test = dynamic_cast<A&>(p);
		std::cout << "Identify using a ref : A" << std::endl;
	}
	catch (const std::bad_cast&)
	{
		try
		{
			B& test = dynamic_cast<B&>(p);
			std::cout << "Identify using a ref : B" << std::endl;
		}
		catch (const std::bad_cast&)
		{
			try
			{
				C&	test = dynamic_cast<C&>(p);
				std::cout << "Identify using a ref : C" << std::endl;
			}
			catch (const std::bad_cast&)
			{
				std::cout << "Something fucked up in ref identification" << std::endl;
			}
		}
	}
}

int	main()
{
	Base *test = generate();
	identify(test);
	identify(*test);
	return (0);
}
