#include <iostream>
using namespace std;

int power(int num1, int num2) {
    int answer = 1;
    for(int i = 1; i <= num2; i++) {
        answer = answer * num1;
    }

    return answer;
}

int main() {
    int a, b;
    char choice;

    do {
        cout << "Enter the value of A and B:" <<endl;
        cin >> a >> b;

        int answer = power(a,b);
        cout << answer << endl;

        cout << "Do you want to run the program again: " << endl;
        cin  >> choice;

    } while(choice == 'y' || choice == 'Y');
    return 0;
}