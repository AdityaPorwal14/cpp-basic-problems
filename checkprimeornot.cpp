#include <iostream>
using namespace std;

int main() {
    int number;
    bool isprime = true;

    cout << "Enter NUmber:" << endl;
    cin >> number;

    for(int i = 2; i <= number; i++) {
        if(number%i == 0) {
            isprime = false;
            break;
        }

    }

    if(isprime == true) {
        cout << "The Number is prime number" << endl;
    } else {
        cout << "The Number is not prime number" << endl;
    }





}