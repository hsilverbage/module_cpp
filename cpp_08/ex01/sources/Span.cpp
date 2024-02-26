#include "Span.hpp"

Span::Span(unsigned int n) : _n(n), _nbElements(0)
{

}

Span::~Span()
{

}

Span::Span(const Span &rhs)
{
	*this = rhs;
}

Span&	Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->_n = rhs._n;
		this->_array = rhs._array;
		this->_nbElements = rhs._nbElements;
	}
	return (*this);
}

void	Span::addNumber(int nb)
{
	if (_nbElements >= _n)
		throw TooManyElem();
	_array.push_back(nb);
	_nbElements++;
}

unsigned int	Span::shortestSpan() const
{
	if (_nbElements < 2)
		throw LessThanTwoElem();

	unsigned int		shortest;
	unsigned int		checker;
	std::vector<int>	sorted = _array;

	std::sort(sorted.begin(), sorted.end());
	shortest = std::abs(sorted[1] - sorted[0]);
	for (unsigned long i = 0; i < sorted.size() - 1; i++)
	{
		checker = sorted[i + 1] - sorted[i];
		if (checker < shortest)
			shortest = checker;
	}
	return (shortest);
}

unsigned int	Span::longestSpan() const
{
	if (_nbElements < 2)
		throw LessThanTwoElem();
	unsigned int	longest = 0;
	std::vector<int>::const_iterator smallest = std::min_element(_array.begin(), _array.end());
	std::vector<int>::const_iterator largest = std::max_element(_array.begin(), _array.end());
	longest = *largest - *smallest;
	return (longest);
}

const int&	Span::getNumber(unsigned int i) const
{
	if (i > _nbElements)
		throw TooManyElem();
	return (_array.at(i));
}

const char*	Span::LessThanTwoElem::what() const throw()
{
	return ("less than two elements !");
}

const char*	Span::TooManyElem::what() const throw()
{
	return ("too many elements !");
}

void	Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator	it_temp = start; it_temp != end; it_temp++)
		addNumber(*it_temp);
}

unsigned int	Span::getNbElem()
{
	return (this->_nbElements);
}