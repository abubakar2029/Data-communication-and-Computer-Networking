#include<iostream>
using namespace std;

class Car {
	public:
		void speed(int speed);
};

void Car::speed(int speed) {
	cout<<"\nThis is given Speed\t"<<speed;
}

int main() {
	Car mehran;
	mehran.speed(8);
	return 0;
}