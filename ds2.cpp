#include <iostream>
using namespace std;

int main() {

    int num;
    string name;
    double value;
    
    cout << "Enter your name: ";
    cin >> name;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    cout << "Enter a decimal value: ";
    cin >> value;
    
    cout << "\n--- Output ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Integer: " << num << endl;
    cout << "Decimal: " << value << endl;
    
    return 0;
}