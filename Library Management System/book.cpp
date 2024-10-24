

// Book class definition

#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;

public:
    // Constructor
    Book(std::string bookTitle, std::string bookAuthor)
        : title(bookTitle), author(bookAuthor) {}

    // Display book information
    void displayBook() const {
        std::cout << "Title: " << title << "\nAuthor: " << author << "\n";
    }

    // Getter for title
    std::string getTitle() const {
        return title;
    }

    // Getter for author
    std::string getAuthor() const {
        return author;
    }
};
