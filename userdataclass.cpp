#include <iostream>
#include <string>
using namespace std;

class User {
private:
    string username;
    string password;

    // Static member to track the total number of users who have entered their data
    static int totalUsers;

public:
    // Constructor
    User() {
        username = "";
        password = "";
    }

    // Method to enter user data
    void enterData() {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        totalUsers++; // Increment static member whenever data is entered
    }

    // Method to display user data
    void displayData() const {
        cout << "Username: " << username << "\nPassword: " << password << endl;
    }

    // Static method to get the total number of users
    static int getTotalUsers() {
        return totalUsers;
    }
};

// Initialize the static member
int User::totalUsers = 0;

int main() {
    // Number of users to enter data
    int numberOfUsers;
    cout << "Enter the number of users: ";
    cin >> numberOfUsers;

    // Dynamically allocate array of users
    User* users = new User[numberOfUsers];

    // Enter data for each user
    for (int i = 0; i < numberOfUsers; i++) {
        cout << "\nEntering data for user " << i + 1 << ":\n";
        users[i].enterData();
    }

    // Display data of all users
    cout << "\nDisplaying data for all users:\n";
    for (int i = 0; i < numberOfUsers; i++) {
        cout << "\nUser " << i + 1 << ":\n";
        users[i].displayData();
    }

    // Display total number of users who entered data
    cout << "\nTotal number of users who entered data: " << User::getTotalUsers() << endl;

    // Free dynamically allocated memory
    delete[] users;

    return 0;
}

