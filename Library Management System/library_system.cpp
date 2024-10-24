
// Main program logic

#include <iostream>
#include <vector>
#include "user.cpp"
#include "book.cpp"
#include "transaction.cpp"

void displayMainMenu() {
    std::cout << "\nLibrary Management System\n";
    std::cout << "1. Add Book\n";
    std::cout << "2. Issue Book\n";
    std::cout << "3. Return Book\n";
    std::cout << "4. Add User\n";
    std::cout << "5. View Transactions\n";
    std::cout << "6. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    std::vector<User> users;
    std::vector<Book> books;
    std::vector<Transaction> transactions;

    int choice;
    do {
        displayMainMenu();
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::string title, author;
            std::cout << "Enter Book Title: ";
            std::cin >> title;
            std::cout << "Enter Author Name: ";
            std::cin >> author;
            Book newBook(title, author);
            books.push_back(newBook);
            std::cout << "Book Added Successfully!\n";
            break;
        }
        case 2: {
            std::string bookTitle, userName;
            std::cout << "Enter Book Title to Issue: ";
            std::cin >> bookTitle;
            std::cout << "Enter User Name: ";
            std::cin >> userName;
            Transaction newTransaction(bookTitle, userName, "Issued");
            transactions.push_back(newTransaction);
            std::cout << "Book Issued Successfully!\n";
            break;
        }
        case 3: {
            std::string bookTitle, userName;
            std::cout << "Enter Book Title to Return: ";
            std::cin >> bookTitle;
            std::cout << "Enter User Name: ";
            std::cin >> userName;
            Transaction newTransaction(bookTitle, userName, "Returned");
            transactions.push_back(newTransaction);
            std::cout << "Book Returned Successfully!\n";
            break;
        }
        case 4: {
            std::string name, password, type;
            std::cout << "Enter User Name: ";
            std::cin >> name;
            std::cout << "Enter Password: ";
            std::cin >> password;
            std::cout << "Enter User Type (admin/user): ";
            std::cin >> type;
            User newUser(name, password, type);
            users.push_back(newUser);
            std::cout << "User Added Successfully!\n";
            break;
        }
        case 5: {
            std::cout << "Transaction History:\n";
            for (const auto &transaction : transactions) {
                transaction.displayTransaction();
            }
            break;
        }
        case 6:
            std::cout << "Exiting program...\n";
            break;
        default:
            std::cout << "Invalid option! Please try again.\n";
            break;
        }
    } while (choice != 6);

    return 0;
}
