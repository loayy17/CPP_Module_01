#include <algorithm>
#include <array>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <vector>

void	multi(int &x)
{
	std::cout << "before = " << x << std::endl;
	x *= 2;
	std::cout << "after = " << x << std::endl;
}
int	main(void)
{
	// Stack Allocation
	float z = 5.1;
	double q = 1;
	bool y = true;
	std::map<std::string, int> mapx = {{"one", 1}, {"two", 2}, {"three", 3},
		{"four", 4}};
	std::array<int, 5> arr = {1, 2, 3, 4, 5};
	int arr2[] = {1, 2, 3, 4, 5};
	typedef std::vector<int> intVector;
	intVector loay(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));
	std::cout << "=========================STACK======================" << std::endl;
	// HEAP Allocation
	int *w = new int(5);
	std::string *omar = new std::string("omar");
	std::map<std::string, int> *x = new std::map<std::string, int>({{"one", 1},
			{"two", 2}, {"three", 3}, {"four", 4}});

	intVector::iterator begin = loay.begin();
	intVector::iterator end = loay.end();
	std::for_each(begin, end, multi);
	for (int h = 0; h < 5; h++)
	{
		std::cout << loay[h] << std::endl;
	}
	std::cout << "========================================================" << std::endl;
	// pointer vs references
	int test = 1;
	int *ptr = &test;
	std::cout << test << std::endl;
	*ptr = 5;
	std::cout << test << std::endl;
	std::cout << "==================================" << std::endl;
	int test2 = 2;
	int &ref = test2;
	int *omartwo = &ref;
	ref = 10;
	std::cout << ref << std::endl;
	std::cout << test2 << std::endl;
	std::cout << &test2 << std::endl;
	std::cout << &ref << std::endl;
	std::cout << &omartwo << std::endl;
	return (0);
}