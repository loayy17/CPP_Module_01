#include <iostream>
class Author {
    private:
        std::string name;
        std::string email;
        Book* books[10]
        int bookCounter;
    public:
        Author(std::string name, std::string email): name(name) , email(email){}
        void getInfo() const {
            std::cout << "The Name Author is : " << name << " , The Email him is : " << email << " ." << std::endl; 
        }    
        void addBook(Book* book) {
            books[bookCounter] =book;
        }
        void printBooks() const {
            for(int i = 0 ; i < bookCounter; i++)
            {
                            std::cout << " The Title of Book is : " << title << " , the price is : " << price << " " ;
                            author.getInfo();
            }
        }
};
class Book {
    private:
        Author author;
        std::string title;
        float price;
    public:
        Book(const Author &author , const std::string &title, const float &price): author(author) ,title(title),price(price) {}
        void getDetails() const {
            std::cout << " The Title of Book is : " << title << " , the price is : " << price << " " ;
            author.getInfo(); 
        }        
};
int main() {
    Author a("Loay", "loay@example.com");
Book b1("OOP in C++", 99.99, &a);
Book b2("Advanced OOP", 120.0, &a);
a.printBooks();
    return 0;
}