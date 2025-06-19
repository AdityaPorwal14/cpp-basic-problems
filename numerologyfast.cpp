#include <iostream>
using namespace std;

void printmessage(int digit) {
    if (digit == 1) {
        cout << "1 - You have communication skills and leadership quality!" << endl;
    } else if (digit == 2) {
        cout << "2 - You are sensitive and emotional and do something for your family" << endl;
    } else if (digit == 3) {
        cout << "3 - You are educated and you have knowledge of every field little bit. You are curious to learn new things and have great imagination power" << endl;
    } else if (digit == 4) {
        cout << "4 - You have fix deposit in banks and organizational skills" << endl;
    } else if (digit == 5) {
        cout << "5 - You are making balance between family, friends and relationship. All are good" << endl;
    } else if (digit == 6) {
        cout << "6 - You want luxury things and you get them and help others. Love marriage relationship" << endl;
    } else if (digit == 7) {
        cout << "7 - You have money loss, institutional power and life dissatisfaction" << endl;
    } else if (digit == 8) {
        cout << "8 - You have good wealth and money. This is the luckiest number" << endl;
    } else if (digit == 9) {
        cout << "9 - You are very kind person. You always want to help others" << endl;
    }
}

int main() {
    string dob;
    int mulyank = 0;
    int bhagyank = 0;
    int birthSum = 0;
    bool visited[10] = {false};

    cout << "Enter Your Date Of Birth (like 25062006): " << endl;
    cin >> dob;

    // Mulyank Calculation and Unique Digit Messages
    for (int i = 0; i < dob.length(); i++) {
        int digit = dob[i] - '0';
        mulyank += digit;

        if (!visited[digit] && digit != 0) {
            visited[digit] = true;
            printmessage(digit);
        }
    }

    // Bhagyank (sum of mulyank digits)
    bhagyank = (mulyank % 10) + (mulyank / 10);

    // Birth Number (sum of first 2 digits of DOB string)
    int first = dob[0] - '0';
    int second = dob[1] - '0';
    birthSum = first + second;

    cout << "Your Mulyank is: " << mulyank << endl;
    printmessage(mulyank);

    cout << "Your Bhagyank is: " << bhagyank << endl;
    printmessage(bhagyank);

    cout << "Your Birth Number is: " << birthSum << endl;
    printmessage(birthSum);

    return 0;
}
