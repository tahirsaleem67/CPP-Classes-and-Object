#include <iostream>
#include <string>
using namespace std;

class User {
private:
    string username;
    string password;

    // Static member to keep track of total number of users who entered data
    static int totalUsers;

public:
    // Method for user to enter data
    void enterData() {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        totalUsers++; // Increment totalUsers each time data is entered
    }

    // Method to display total users
    static void displayTotalUsers() {
        cout << "Total number of users: " << totalUsers << endl;
    }
};

// Initialize static member outside the class
int User::totalUsers = 0;

int main() {
    User user1, user2, user3;

    // Each user enters their data
    user1.enterData();
    user2.enterData();
    user3.enterData();

    // Display total number of users who have entered data
    User::displayTotalUsers();

    return 0;
}

