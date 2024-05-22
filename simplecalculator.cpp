#include <iostream>
using namespace std;

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y == 0) {
        cout << "Error! Division by zero." << endl;
        return 0;
    } else {
        return x / y;
    }
}

int main() {
    double num1, num2;
    int choice;

    cout << "Welcome to the Basic Calculator!" << endl;
    cout << "Please choose an operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    // Get user input for operation choice
    cout << "Enter the number corresponding to the operation (1/2/3/4): ";
    cin >> choice;

    // Check if the choice is valid
    if (choice >= 1 && choice <= 4) {
        // Get user input for the two numbers
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        // Perform the chosen operation
        switch(choice) {
            case 1:
                cout << "The result of addition is: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "The result of subtraction is: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "The result of multiplication is: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "The result of division is: " << divide(num1, num2) << endl;
                break;
        }
    } else {
        cout << "Invalid input. Please enter a number between 1 and 4." << endl;
    }

    return 0;
}
