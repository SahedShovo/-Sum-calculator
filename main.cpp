#include <iostream>
#include <cstdlib> // For clearing the screen
 
using namespace std;
 
int main() {
    while (true) {
        cout << "Menu:"<<endl;
        cout << "1. Addition:"<<endl;
        cout << "2. Subtraction:"<<endl;
        cout << "3. Multiplication:"<<endl;
        cout << "4. Division:"<<endl;
        cout << "5. Clear Screen:"<<endl;
        cout << "6. Exit:"<<endl;
        cout << "Enter your choice:";
 
        int choice;
        cin >> choice;
 
        if (choice == 1) { // Addition
            int n;
            cout << "Enter the number of values to add: ";
            cin >> n;
            int sum = 0;
            int value;
            for (int i = 0; i < n; i++) {
                cout << "Enter value " << i + 1 << ": ";
                cin >> value;
                sum += value;
            }
            cout << "Sum: " << sum << endl;
        }
        else if (choice == 2) { // Subtraction
            int num1, num2;
            cout << "Enter two numbers to subtract: ";
            cin >> num1 >> num2;
            int result = num1 - num2;
            cout << "Result: " << result << endl;
        }
        else if (choice == 3) { // Multiplication
            int n;
            cout << "Enter the number of values to multiply: ";
            cin >> n;
            int product = 1;
            int value;
            for (int i = 0; i < n; i++) {
                cout << "Enter value " << i + 1 << ": ";
                cin >> value;
                product *= value;
            }
            cout << "Product: " << product << endl;
        } else if (choice == 4) { // Division
            int num1, num2;
            cout << "Enter two numbers to divide: ";
            cin >> num1 >> num2;
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            else {
                float result = static_cast<float>(num1) / num2;
                cout << "Result: " << result << endl;
            }
        }
        else if (choice == 5) { // Clear Screen
            system("clear");
        }
        else if (choice == 6) { // Exit
            break;
        }
        else {
            cout << "Invalid choice. Please select a valid option." << endl;
        }
    }
 
    return 0;
}
 
