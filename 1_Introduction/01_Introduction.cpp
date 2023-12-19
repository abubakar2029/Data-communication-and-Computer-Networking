#include <iostream>
using namespace std;

// Procedural/Functional programming
void printGreetings() {
    cout << "Hello World! I am from a function";
}

// Object-Oriented Approach
class Greetings {
public:
    Greetings() {
        cout << "Hello World! I am from an object";
    }
};

int main() {
    // Procedural/Functional programming
    printGreetings();

    // Object-Oriented Approach
    Greetings objGreetings;

    return 0;
}