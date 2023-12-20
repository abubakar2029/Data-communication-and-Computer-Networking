#include<iostream>
using namespace std;

int namaz(int a, int& b) {
	int y=90;
	while(a<b) {
		y=y++ + ++a + ++a + --a;
		a++;
		cout<<"Y ha"<<y<<endl;
	}
	return y;
}
int main() {
	int a=4;
	int b=10;
	cout<<namaz(a,b);
	cout<<a;

	return 0;
}