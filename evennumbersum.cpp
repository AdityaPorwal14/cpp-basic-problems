#include <iostream>
using namespace std;

int main() {
    int number;
    int evensum = 0;

    cout<< "Enter the number"<<endl;
    cin>>number;

    for(int i=0; i<=number; i++) {
        if(i%2 == 0) {
            evensum+=i;
        }
    }

    cout<<"Sum of Even Number is: " << evensum <<endl;
    return 0;
}