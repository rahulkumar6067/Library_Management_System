
// User class definition

#include <iostream>
#include <string>

class User {
private:
    std::string userName;
    std::string password;
    std::string userType; // Can be "admin" or "user"

public:
    // Constructor to initialize User
    User(std::string name, std::string pass, std::string type)
        : userName(name), password(pass), userType(type) {}

    // Authenticate the user
    bool authenticate(std::string enteredPassword) const {
        return password == enteredPassword;
    }

    // Check if user is admin
    bool isAdmin() const {
        return userType == "admin";
    }

    // Get username
    std::string getUserName() const {
        return userName;
    }

    // Display user info
    void displayUserInfo() const {
        std::cout << "User Name: " << userName << "\n";
        std::cout << "User Type: " << (isAdmin() ? "Admin" : "Regular User") << "\n";
    }
};
