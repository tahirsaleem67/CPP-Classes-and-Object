#include <iostream>
#include <string>
using namespace std;

// Car class definition
class Car {
private:
    string brand;
    string model;
    int year;
    string color;

public:
    // Constructor to initialize the car attributes
    Car(string b, string m, int y, string c) : brand(b), model(m), year(y), color(c) {}

    // Method to display car details
    void displayInfo() {
        cout << "Brand: " << brand << "\nModel: " << model << "\nYear: " << year << "\nColor: " << color << endl;
    }
};

int main() {
    // Creating three different car objects
    Car car1("Tesla", "Model S", 2023, "Red");
    Car car2("Ford", "Mustang", 2022, "Blue");
    Car car3("BMW", "X5", 2021, "Black");

    // Displaying details and starting/stopping engines for each car
    car1.displayInfo();
    

    cout << endl;

    car2.displayInfo();
    
    
    cout << endl;

    car3.displayInfo();
   

    return 0;
}

