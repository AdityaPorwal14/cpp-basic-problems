#include <iostream>
using namespace std;

int fibonachi(int number) {

    int first = 0;
    int second = 1;

    for(int i = 0; i < number; i++) {

        int next = first + second;
        cout << first;

        first = second;
        second = next;

        }
    }

int main () {
    int n;
    cout << "Enter the NUmber:" << endl;
    cin >> n;

    fibonachi(n);
}