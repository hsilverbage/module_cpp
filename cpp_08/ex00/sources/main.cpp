#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

int main (void)
{
	std::cout << "\t\t TEST WITH VECTOR" << std::endl;
	try
	{
		std::vector<int>	myvector;

		for (int i=1; i<=5; i++) 
			myvector.push_back(i);

		std::cout << "myvector contains :";
		for (std::vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
			std::cout << ' ' << *it;

		std::cout << "\nTrying to find the number 3 : " << *(easyfind(myvector, 3)) << std::endl;
		std::cout << "Trying to find the number 42 : " << *(easyfind(myvector, 42)) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n\t\t TEST WITH LIST" << std::endl;
	try
	{
		std::list<int>	mylist;
		for (int i = 0; i < 11; i++)
			mylist.push_back(i * 2);

		std::cout << "mylist contains :";
		for (std::list<int>::iterator it = mylist.begin() ; it != mylist.end(); it++)
			std::cout << ' ' << *it;

		std::cout << "\nTrying to find the number 2 : " << *(easyfind(mylist, 2)) << std::endl;
		std::cout << "Trying to find the number 3 : " << *(easyfind(mylist, 3)) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

    return (0);
}