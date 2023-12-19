#include<iostream>
using namespace std;

class Car {
	public:
		string brand;
		string model;
		int year;
		Car(string x,string y,int z);
};
// Constructor definition outside the class
Car::Car(string x, string y, int z) {
	brand = x;
	model = y;
	year = z;
}
int main() {
    // object 1
	Car mehran("Mehran","X5",1998);
	cout<<"\nObject Model : "<<mehran.model<<"\nObject Year : "<<mehran.year;

    // object 2
    Car ford("Ford", "Mustang", 1969);
	cout<<"\nObject Model : "<<ford.model<<"\nObject Year : "<<ford.year;

	return 0;
}