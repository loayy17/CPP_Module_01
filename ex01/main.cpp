#include "Zombie.hpp"
#include <iostream>

int	isValidNumber(const char *str, int &number)
{
	std::string numberStr;
	while (true)
	{
		std::cout << "Please enter a positive integer: ";
		if (!std::getline(std::cin, numberStr))
		{
			if (std::cin.eof())
			{
				std::cout << "\nEnd of input detected. Exiting." << std::endl;
				return (0);
			}
			std::cin.clear();
			return (0);
		}
        if(numberStr.length() == 0 || numberStr.find_first_not_of("0123456789") != std::string::npos)
        {
            std::cerr << "Error: Invalid number '" << numberStr << "'. Please enter a positive integer." << std::endl;
            continue;
        }
		number = std::stoi(numberStr, nullptr, 10);
		if (number > 0)
			return (1);
		std::cerr << "Error: Invalid number '" << numberStr << "'. Please enter a positive integer." << std::endl;
	}
}

int	main(int ac, char **av)
{
	int numZombies;
	if (ac != 2)
	{
		std::cerr << "Usage: " << av[0] << " <zombie_name>" << std::endl;
		return (1);
	}
	std::cout << "============================HORDE=======================" << std::endl;
	if (!isValidNumber(av[1], numZombies) || numZombies <= 0)
		return (1);
	Zombie *zozo = zombieHorde(numZombies, av[1]);
	for (int i = 0; i < numZombies; i++)
		zozo[i].announce();
	delete[] zozo;
	return (0);
}