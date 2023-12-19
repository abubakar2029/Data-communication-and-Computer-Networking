
#include <iostream>
using namespace std;

int main() {
	string food="pizza";
// making a reference
	string *ref=&food;
	cout<<"Pointer Value : "<<ref<<endl;
	cout<<"Pointer address : "<<&*ref<<endl;
	cout<<"Reference value : "<<*ref<<endl;
	cout<<"Food address : "<<&food<<endl;
	return 0;
}
