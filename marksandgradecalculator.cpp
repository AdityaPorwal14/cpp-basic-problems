#include <iostream>
using namespace std;

int main() {
    int marks, sum = 0;
    int persantage = 0;
    cout << "Enter the marks of all subjects: " <<endl;

    for(int i = 0; i < 5; i++) {
    cin >> marks;
    sum += marks; 
}

    persantage = sum / 5.0;


    if (persantage >= 90) cout << "A";
    else if (persantage >= 75) cout << "B";
    else if (persantage >= 50) cout << "C";
    else if (persantage <= 50) cout << "congo you are Fail";
}