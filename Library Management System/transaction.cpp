

// Transaction handling

#include <iostream>
#include <string>

class Transaction {
private:
    std::string bookTitle;
    std::string userName;
    std::string transactionType; // "Issued" or "Returned"

public:
    // Constructor to initialize transaction
    Transaction(std::string title, std::string user, std::string type)
        : bookTitle(title), userName(user), transactionType(type) {}

    // Display transaction details
    void displayTransaction() const {
        std::cout << "Book Title: " << bookTitle
                  << ", User: " << userName
                  << ", Transaction: " << transactionType << "\n";
    }
};
