#include <iostream>
using namespace std;

bool checkPrime(int n) {
    if (n < 2) return false;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false; // It is not a prime number
        }
    }

    return true; // It is a prime number
}

int main() {
    int num;
    cout << "Enter a random number: ";
    cin >> num;

    if (checkPrime(num)) {
        cout << num << " is a Prime number." << endl;
    } else {
        cout << num << " is not a Prime number." << endl;
    }

    cout << "Program terminated." << endl;
    return 0;
}
