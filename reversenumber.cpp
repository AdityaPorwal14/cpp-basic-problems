#include <iostream>
using namespace std;

int main () {

    int number, rem = 0;
    cout << "Enter a Number: " << endl;
    cin >> number;

    while (number>0) {
        rem = number % 10;
        cout << rem;

        number /= 10;
    }

}

