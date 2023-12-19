#include<iostream>
using namespace std;

class Student {
	public:
		int rollNumber;
		string name;
		int age;
};
int main() {
	// Creating multiple Objects/entities of a class

	Student Daniel;
	Daniel.rollNumber=7991;
	Daniel.age=20;

	Student Alexandar;
	Alexandar.rollNumber=7992;
	Alexandar.age=20;


// Now checking output
	cout << "Daniel roll No."<<Daniel.rollNumber<<endl;
	cout << "Alexandar roll No."<<Alexandar.rollNumber;

	return 0;
}