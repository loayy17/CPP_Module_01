#include "Book.hpp"

Book::Book(std::string title, std::string author)
{
	this->title = title;
	this->author = author;
}
Book::~Book()
{
	std::cout << "Book destroyed: " << title << std::endl;
}
Book::Book(const Book &other)
{
	this->title = other.title;
	this->author = other.author;
}
void Book::display(void)
{
	std::cout << "Title: " << title << ", Author: " << author << std::endl;
}