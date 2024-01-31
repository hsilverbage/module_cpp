#include "IntegerClass.hpp"

int	main (void)
{
	Integer	x(30);
	Integer y(10);
	Integer	z(0);

	std::cout << "Value of x : " << x <<std::endl; // just x thanks to surcharge of << operator which will get the _nb of the class
	std::cout << "Value of y : " << y <<std::endl;
	y = Integer(12);								//thanks for surcharge of = operator
	std::cout << "Value of y : " << y <<std::endl;

	std::cout << "Value of z : " << z <<std::endl;
	z = x + y;										//thanks for surcharge of + operator
	std::cout << "Value of z : " << z <<std::endl;
	return (0);
}
