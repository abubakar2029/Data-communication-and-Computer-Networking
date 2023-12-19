#include<iostream>
using namespace std;

// Methods are functions in classes
//  There are two ways to define functions that belongs to a class:

// Inside class definition
class Greeting1 {
	public:
		void greet();
};
void Greeting1::greet() {
	cout << "\nLearning methods in classes";
}

// Outside class definition
class Greeting2 {
	public:
		void greet() {
			cout << "\nLearning methods in classes";
		}
};
int main() {
	Greeting1 obj;
	// Call the method
	obj.greet();

	Greeting2 obj2;
	obj2.greet();

	return 0;
}