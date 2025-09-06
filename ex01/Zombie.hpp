#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
class Zombie
{
  public:
	Zombie();
	~Zombie();
	void announce(void);
	void setName(const std::string &name);

  private:
	std::string name;
};
Zombie	*zombieHorde(int N, const std::string &name);
#endif