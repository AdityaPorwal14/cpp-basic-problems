#include <iostream>
using namespace std;

int main() {
    int marks;
    cout<<"Enter marks between 0-100"<<endl;
    cin>>marks;

    if (marks>=0 and marks<=29){
        cout<<"Fail"<<endl;
    }

    else if(marks>=30 and marks<=44){
        cout<<"D+"<<endl;
    }

    else if(marks>=45 and marks<=59){
        cout<<"C"<<endl;
    }

    else if(marks>=60 and marks<=74){
        cout<<"B"<<endl;
    }

    else if(marks>=74 and marks<=89){
        cout<<"A"<<endl;
    }

    else if(marks>=90 and marks<=100){
        cout<<"A++"<<endl;
    }
    
    else {
        cout<<"invalid input";
}

}