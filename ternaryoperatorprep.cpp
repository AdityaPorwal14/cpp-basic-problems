#include<iostream>
using namespace std;

int main(){
    char ch;

    cout<<"Enter character: "<<endl;
    cin>>ch;
 
     cout<<(ch == 'a' || ch == 'e' || ch=='o' || ch=='i' || ch=='u' || ch =='A' || ch=='E' || ch=='I' || ch=='O'|| ch=='U' ? "vovel" : "consonent");
   
} 