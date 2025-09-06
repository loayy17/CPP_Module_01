#include "Book.hpp"

int main() {
    Book b1("The Hobbit", "J.R.R. Tolkien");
    b1.display();

    Book b2 = b1; // copy constructor
    b2.display();

    return 0;
}
