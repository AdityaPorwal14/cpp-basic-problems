#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter character"<<endl;
    cin>>ch;

    if(ch>='A' && ch<='Z'){
        cout<<"Uppercase"<<endl;
    } else {
        cout<<"lowercase"<<endl;
    }
}