#ifndef	EASYFIND_HPP
#define	EASYFIND_HPP

#include <algorithm>

class	NotFoundException : public std::exception
{
	public :
		const char* what() const throw()
		{
			return ("Number not found");
		}
};


template <typename T>

typename T::iterator	easyfind(T container, int toFind)
{
	typename T::iterator 	it= container.begin();
	typename T::iterator	itEnd = container.end();

	it = std::find(it, itEnd, toFind);
	if (it == itEnd)
		throw NotFoundException();
	return (it);
}


#endif
