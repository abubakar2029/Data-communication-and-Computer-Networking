#include <iostream>
using namespace std;

int main() {
	string food="pizza";
// making a reference
	string &ref=food;
	cout<<"Reference : "<<ref<<endl;
	cout<<"Reference address : "<<&ref<<endl;
	cout<<"Food address : "<<&food<<endl;
	return 0;
}