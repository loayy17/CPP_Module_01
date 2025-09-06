#ifndef BOOK_HPP
# define BOOK_HPP
# include <iostream>
class Book
{
  public:
	Book(std::string title, std::string author);
	~Book();
	Book(const Book& other);
	void display(void);

  private:
	std::string title;
	std::string author;
};
#endif