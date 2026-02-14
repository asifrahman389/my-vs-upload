#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    
    cout << "Sum is: " << a + b << endl; // এই লাইনটি এখন রান হবে না
    cout << "Product is: " << a * b << endl; // শুধুমাত্র এই লাইনটি রান হবে

    #if 0
    // এই ব্লকের ভেতরের কোনো কোডই রান হবে না
    cout << "Testing old logic..." << endl;
    cout << "Wait, I don't want to run this." << endl;
#endif

    cout << "Running the actual assignment code."  << endl;
    
    return 0;
}