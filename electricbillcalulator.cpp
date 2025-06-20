#include<iostream>
using namespace std;

int main() {
    float units, bill;
    cout << "Enter units consumed: ";
    cin >> units;

    if (units <= 100)
        bill = units * 1.5;

    else if (units <= 300)
        bill = 100 * 1.5 + (units - 100) * 2.5;
        
    else
        bill = 100 * 1.5 + 200 * 2.5 + (units - 300) * 4;

    cout << "Total Bill = " << bill;
    return 0;
}
