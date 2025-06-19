#include <iostream>
using namespace std;

int AP(int n) {
    int answer = 3 * n + 7;
    return answer;
}

int main() {
    int num;
    cout << "Enter the value of N:" << endl;
    cin >> num;

    cout << AP(num);
}