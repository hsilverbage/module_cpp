#include "Serialization.hpp"
#include "Data.hpp"

// typedef struct Data
// {
// 	int	nb = 42;
// } Data;


int	main(void)
{
	Data*	test = new Data;
	uintptr_t	raw = Serialization::serialize(test);

	std::cout << "DATA\t: " << Serialization::serialize(test) << std::endl;
	std::cout << "U INT\t: " << raw << std::endl;
	std::cout << "DATA\t: " <<test << std::endl;
	std::cout << "U INT\t: " << Serialization::deserialize(raw) << std::endl;
	std::cout << "DATA\t: " <<test->nb << std::endl;
	std::cout << "U INT\t: " << Serialization::deserialize(raw)->nb << std::endl;

	return (0);
}
