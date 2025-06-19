#include<iostream>
using namespace std;

int main(){
    float amount;
    float balance;

    cout<<"Enter Amount: "<<endl;
    cin>>amount;

    cout<<"Enter Balance: "<<endl;
    cin>>balance;

    if(amount<balance and int(amount)%100==0) {
        cout<<"Amount Withdraw"<<endl;
        cout<<"Total balance is: "<<balance-amount<<endl;

    }

    else{
        
        if(int(amount)%100 != 0){
            cout<<"Error: Amount is not multiply by 100"<<endl;
        } else{
            cout<<"Error insufficinet balance"<<endl;
        }
    }

}