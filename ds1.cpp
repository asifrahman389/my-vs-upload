#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    string name;
    double value;
    
    cout << "Enter your name: ";
    cin >> name;
    
    cout << "Enter an integer: ";
    cin >> number;
    
    cout << "Enter a decimal value: ";
    cin >> value;
    
    cout << "\n--- Your Input ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Integer: " << number << endl;
    cout << "Value: " << value << endl;
    cout << "Sum of number and value: " << (number + value) << endl;
    
    return 0;
}