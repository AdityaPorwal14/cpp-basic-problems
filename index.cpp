// #include<iostream>
// using namespace std;
// int main(){
//     /*int name = 1;
//     cout<<"hello this is my first program \n";*/
//     int a = 6;
//     cout<<"a is : "<<a;
//     return 0;
// }
// #include<iostream>
// using namespace std;
//     int books_in_the_bag_is = 900;
// int main()
// {
//     int books_in_the_bag_is = 500;
//     cout<<"this is a built in data type program";
//     int a = 500;
//     char b = 'c';
//     float c= 7346.3534;
//     double e= 8257365872635.287239562758;
//     bool f= true;
//     cout<<a<<b<<c<<f;
//     cout<<books_in_the_bag_is;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num1, num2;
//     cout<<"enter a number";
//     cin>>num1;
//     cout<<"enter a second number";
//     cin>>num2;
//     cout<<"the sum is \n"<<num1 + num2;
//     return 0;
// }
// CPP Program to demonstrate the Bitwise Operators
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 6, b = 4;

//     // Binary AND operator
//     cout << "a & b is " << (a & b) << endl;

//     // Binary OR operator
//     cout << "a | b is " << (a | b) << endl;

//     // Binary XOR operator
//     cout << "a ^ b is " << (a ^ b) << endl;

//     // Left Shift operator
//     cout << "a<<1 is " << (a << 1) << endl;

//     // Right Shift operator
//     cout << "a>>1 is " << (a >> 1) << endl;

//     // One’s Complement operator
//     cout << "~(a) is " << ~(a) << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//    int a=8, b=4;
//     cout<<"a+b is "<<a++<<endl;
//     cout<<"a>b is "<<(a!=b)<<endl;
//     cout<<a++<<endl;
//     cout<<++a<<endl; //10
//     cout<<--a<<endl; //9
//     cout<<a&&b; //
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//    cout<<"this is my first program in c++";
//    int a=5, b=6;
//    cout<<"this is a logical operator"<<endl;
//    cout<<(a+=b)<<(a-=b)<<(a*=b)<<(a/=b)<<(a%=b)<<endl; //11 1 30 1 1 
//    cout<<((a==b)&&(!(a>b)))<<endl; //0
//    cout<<((a>b)||(a>=b))<<endl;    //0
//    cout<<((!(a>=b)))<<endl;        //1
//    cout<<((a==b)||(a>b))<<endl;    //0
// }
//    cout<<"this is a a++ 5 operator ="<<(a++)<<endl; //5 
//     cout<<"this is a a-- 6 operator ="<<(a--)<<endl; //6
//      cout<<"this is a a-- 5 operator ="<<(a--)<<endl; //5
//        cout<<"this is a a-- 4 operator ="<<(a--)<<endl; //4
//           cout<<"this is a a-- 3 operator ="<<(a--)<<endl; //3
//             cout<<"this is a a-- 2 operator ="<<(a--)<<endl; //2
//                 cout<<"this is a a-- 1 operator ="<<(a--)<<endl; //1
//                     cout<<"this is a a-- 0 operator ="<<(a--)<<endl; //0
// }
//    cout<<"this is the arithematic operators";
//    cout<<"this is a arithematic operator ="<<(a+b)<<endl; //11
//    cout<<"this is a arithematic operator ="<<(a-b)<<endl; //-1
//    cout<<"this is a arithematic operator ="<<(a*b)<<endl; //30
//    cout<<"this is a arithematic operator ="<<(a/b)<<endl; //0
//    cout<<"this is a arithematic operator ="<<(a%b)<<endl; //5
//    cout<<"this is a arithematic operator ="<<++a<<endl; //6
//    cout<<"this is a arithematic operator ="<<--a<<endl; //4    

//    cout<<"this is a relational operators"<<endl;
//    cout<<"logical operator is <,>,<=,>=,==,!=,"<<(a<b)<<(a>b)<<(a<=b)<<(a>=b)<<(a==b)<<(!(a==b))<<endl; //101001

//    cout<<"this is a assignment operator"<<endl;
// int d=110,c=20;
// cout<<d%c; 

//    return 0;
// }
// #include<iostream>
// using namespace std;
// int c=45;
// int main(){
//     int a,b,c;
//     cout<<"input the value of a"<<endl;
//     cin>>a;
//     cout<<"input the value of b"<<endl;
//     cin>>b;
//     c = a + b;
//     cout<<"the addition of a and b is : "<<::c/*this is use for function outside var*/<<endl;
//     return 0;
// }
//float double and long double literals 
// #include<iostream>
// using namespace std;
// int c = 420; //this is a global variable 
// int main(){
    // int a,b,c;
    // cout<<"enter the value of a"<<endl;
    // cin>>a;
    // cout<<"enter the value of b"<<endl;
    // cin>>b; //we can not write endl in cin because it cannot make sense 
    // c = a+b;
    // cout<<"the sum is : "<<c<<endl;
    // cout<<"the global variable is :"<<::c<<endl; //::c this is a global var (::)it's called as scope resolution operator it is used for access global var. 
//     float x = 59.484f;
//     double y = 539.9283l;
//     cout<<"the value of x is : "<<x<<endl;
//     cout<<"the value of y is : "<<y<<endl;
//     cout<<"the bite taken of x is :"<<sizeof(x)<<endl;
//     cout<<"the value taken of y is :"<<sizeof(y)<<endl; 
//     cout<<int(x)<<endl;
//     cout<<int(y)<<endl;
//     cout<<sizeof(34.4)<<endl;    //8
//     cout<<sizeof(34.4f)<<endl;  //4
//     cout<<sizeof(34.4l)<<endl;   //12
//     return 0;
//     //34.4 this is a double value  8byte 
//     //34.4f this is a floting value  4byte
//     //34,4l this is a long double      12byte

// }
// #include<iostream>
// using namespace std; 
// int main(){
//     char a = ("aditya porwal"); 
//     char b = ("ashutosh porwal");
//     char & c = b;
//     cout<<"the c is :"<<c<<endl;
//     return 0;


// }
// #include<iostream>
// using namespace std;
// int x=10;
// int main(){
//     int x =30;
//     cout<<"the value of x is: "<<::x<<endl; //10
//     return 0;
// }
// C++ Program to demonstrate 
// use of references
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 10;

//     // ref is a reference to x.
//     int& ref = x;

//     // Value of x is now changed to 20
//     ref = 20;
//     cout << "x = " << x << '\n';

//     // Value of x is now changed to 30
//     x = 30;
//     cout << "ref = " << ref << '\n';

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x = 50;
//     int y = 100;
//     int & a = y;
//     int & z = x;
//     cout<<"the value of a = "<<a<<endl<<"the value of z = "<<z<<endl; //z=50 a=100
    //when you use refrensh var you know before the refresh the variable is empty otherwise it gives problem
// int i = 10;
// double d = 5.5;
// double result = i + d;  // 'i' is implicitly converted to double
// cout<<result;
// return 0;
// }
//constant in c++
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     float b = 20.30;
//     double c = 40.50;
//     float d = 70.80901000;
//     cout<<int(a)<<endl<<int(b)<<endl; //when we use endl in the middle so we cannot use ; sign
//     int x = a+b;
//     cout<<"the value of x is : "<<x<<endl;
//     float y = double(d);
//     cout<<y<<endl;  
// }
//   const int z = 70;
//     int x = 45;
//     int y = 50;
//     z = 60; //you will get a error becuase z is constant 
// cout<<"the value of x is "<<x<<endl<<"the value of y is "<<y<<endl<<"the value of z is "<<z<<endl;

//manipulators in c++ when you use setw iomanip file is required 
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//  int a = 3, b = 78, c = 1233;
//  cout<<"a is :"<<setw(5)<<a<<endl; 
//  cout<<"b is :"<<setw(5)<<b<<endl;
//  cout<<"c is : "<<setw(4)<<c<<endl;
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"tell me your age : "<<endl;
//     cin>>age;
    // if(age<18){
    //     cout<<"you are a kid you cannot come to the party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"you are a kid you get your pass when you are come to the party"<<endl;
    // }
    // else{
    //     cout<<"you are come to the party"<<endl;
    // }
//this is switch case statement 
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"tell me your age : "<<endl;
//     cin>>age;
//     switch(age)
//     {
//         case 18:
//         cout<<"you are 18"<<endl;
//         break;

//         case 20:
//         cout<<"you are 20"<<endl;
//         break;

//         case 22:
//         cout<<"your are 22"<<endl;
//         break;

//         default:
//         cout<<"there is no choices"<<endl;
//         break;
//     }

// }
//29 august i learn const keyword, manuplitors, if else statement, switch cse statement.
// #include<iostream>
// using namespace std;
//  main(){
//     string signal;
//     cout<<"enter the signal: red/orange/green : "<<endl;
//     cin>>signal;

//     if(signal=="red")
//     {
//     cout<<"stop don't go "<<endl;
//     }

//     else if(signal=="orange")
//     {
//         cout<<"you can ready to go"<<endl;
//     }

//     else if(signal=="green")
//     {
//         cout<<"you can go "<<endl;
//     }
//     else
//     {
//         cout<<"pls enter correct value"<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// main(){
//     string weather;
//     cout<<"enter the weather of your city"<<endl;
//     cin>>weather;
//     if(weather=="rain"){
//         cout<<"you go outside with your umbrella"<<endl;
//     }
//     else{
//         cout<<"you go outside with free mind today is not rain in your city"<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int amount,tax;
//     cout<<"enter the ammount"<<endl;
//     cin>>amount;
//     if(amount<=400000){
//         cout<<"not tax"<<endl;
//     }
//     else if (amount>=8000000 || amount<=17000000){
//         cout<<"tax is 10%"<<endl;
//         tax=amount*10/100;
//         cout<<tax;
//     }
//     else if (amount>=11000000 || amount<=17000000)
//     {
//         cout<<"tax is 15%"<<endl;
//         tax=amount*15/100;
//         cout<<tax;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"enter your age: "<<endl;
//     cin>>age;
//     if(age>=18)
//     {
//         if(age>=18 && age<=59)
//         {
//             cout<<"you are eligible to work."<<endl;
//         }
//         else
//         {
//             cout<<"you are not eligible to work you are old person."<<endl;
//         }
//     }
//     else
//     {
//         cout<<"you are child you are not eligible to work"<<endl;
//     }
// }
//ERROR ARISE IN THIS QUESTION ::
// #include<iostream>
// using namespace std;
// int main(){
//     int num1, num2;
//     char operation;
//     cout<<"enter your first number : "<<endl;
//     cin>>num1;
//     cout<<"enter second number : "<<endl;
//     cin>>num2;
//     cout<<"enter operation your perform : "<<endl;
//     cin>>operation;
//     switch(operation){
//         case '+':
//         cout<<"addition is : "<<num1+num2<<endl<<endl;
//         break;
//         case '-':
//         cout<<"substraction is : "<<num1-num2<<endl;
//         break;
//         case '*':
//         cout<<"multiplication is : "<<num1*num2<<endl;
//         break;
//         case '/':
//         cout<<"division is : "<<num1/num2<<endl;
//         break;
//         case '%':
//         cout<<"reminder is : "<<num1%num2<<endl;
//         break;
//         default:
//         cout<<"enter right operation bhai ji"<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"give number between 1 to 7"<<endl;
//     cin>>num;
//     switch(num){
//         case 1:
//             cout<<"monday"<<endl;
//             break;
//         case 4:
//         cout<<"thursday"<<endl;
//         break;
//         case 7:
//         cout<<"invalid input"<<endl;
//         break;
//         default:
//         cout<<"invalid input";
//         return 0;
//     }
// }
// #include<iostream>
// using namespace std;
// main(){
//     char grade;
//     cout<<"enter your grade"<<endl;
//     cin>>grade;
//     switch(grade){
//         case 'a':
//         cout<<"excellent"<<endl;
//         break;
//         case 'b':
//         cout<<"good"<<endl;
//         break;
//         case 'c':
//         cout<<"average"<<endl;
//         break;
//         case 'd':
//         cout<<"below average"<<endl;
//         break;
//         case 'f':
//         cout<<"fail"<<endl;
//         break;
//         default:
//         cout<<"invalid grade"<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2,result,operation;
//     cout<<"enter a number of operation 1:addition\n 2:substraction\n 3:multiplication\n 4:division\n 5:exit"<<endl;
//     cin>>operation;
//     cout<<"enter the first number: "<<endl;
//     cin>>num1;
//     cout<<"enter the second number: "<<endl;
//     cin>>num2;
//     switch(operation){
//         case 1:
//         result = num1+num2;
//         cout<<"the addition is: "<<result<<endl;
//         break;
//         case 2:
//         result = num1-num2;
//         cout<<"the subtraction is: "<<result<<endl;
//         break;
//         case 3:
//         result = num1*num2;
//         cout<<"the multiplication is: "<<result<<endl;
//         break;
//         case 4:
//         result = num1/num2;
//         cout<<"the division is: "<<result<<endl;
//         break;
//         default:
//         cout<<"pls enter correct number";
//     }
// }

// #include<iostream>
// #include<string>
// using namespace std;
// main(){
//     string answer;
//     int score=0;
//     cout<<"what is the capital of japan"<<endl;
//     cout<<"a. Tokyo"<<endl;
//     cout<<"b.India"<<endl;
//     cout<<"c.Makou"<<endl;
//     cout<<"d.Rajasthan"<<endl;
//     cout<<"give answer (a,b,c,d) "<<endl;
//     cin>>answer;

//     if(answer == "a")
//     {
//         cout<<"your answer is correct"<<endl;
//         score++;
//     }
//     else{
//         cout<<"wrong answer";
//     }

//     cout<<"which is longest river in the world"<<endl;
//     cout<<"a.amazone river"<<endl;
//     cout<<"b.nile river"<<endl;
//     cout<<"c.yangtze river"<<endl;
//     cout<<"d.mississippi river"<<endl;
//     cout<<"give answer (a,b,c,d) "<<endl;
//     cin>>answer;

//     if(answer == "b")
//     {
//         cout<<"your answer is correct"<<endl;
//         score++;
//     }
//     else{
//         cout<<"your anwer is wrong"<<endl;
//     }
    
//     cout<<"what is the larget planet in our solor system"<<endl;
//     cout<<"a.earth"<<endl;
//     cout<<"b.mars"<<endl;
//     cout<<"c.jupitor"<<endl;
//     cout<<"d.saturn"<<endl;
//     cout<<"give answer (a,b,c,d) "<<endl;
//     cin>>answer;

//     if(answer == "c")
//     {
//         cout<<"your answer is correct"<<endl;
//         score++;
//     }
//     else
//     {
//         cout<<"your answer is wrong"<<endl;
//     }
//     cout<<"what is the chemical formula of water"<<endl;
//     cout<<"a.co2"<<endl;
//     cout<<"b.h2o"<<endl;
//     cout<<"c.nacl"<<endl;
//     cout<<"d.o2"<<endl;
//     cout<<"give answer (a,b,c,d) "<<endl;
//     if(answer == "b")
//     {
//         cout<<"your answer is right"<<endl;
//         score++;
//     }
//     else{
//         cout<<"your answer is wrong"<<endl;
//     }
//     cout<<"which coutry is known as the land of the rising sun"<<endl;
//     cout<<"a.japan"<<endl;
//     cout<<"b.india"<<endl;
//     cout<<"c.pakisthan"<<endl;
//     cout<<"d.america"<<endl;
//     cout<<"give answer (a,b,c,d) "<<endl;
//     if(answer == "a")
//     {
//         cout<<"your answer is right"<<endl;
//         score++;
//     }
//     else
//     {
//         cout<<"your answer is wrong"<<endl;
//     }


//     cout<<"your total score is : "<<score<<endl;
//     if(score>=4)
//     {
//         cout<<"excellent";
//     }
//     else if(score<=3)
//     {
//         cout<<"your are the average student"<<endl;
//     }
//     else
//     {
//         cout<<"pls improve your general knowledge"<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,addition,substraction,multiplication,division;
//     cout<<"enter the first number"<<endl;
//     cin>>a;
//     cout<<"enter the second number"<<endl;
//     cin>>b;
//     addition = a+b;
//     substraction = a-b;
//     multiplication = a*b;
//     division = a/b;
//     cout<<"the addition is: "<<addition<<endl;
//     cout<<"the substraction is : "<<substraction<<endl;
//     cout<<"the multiplication is : "<<multiplication<<endl;
//     cout<<"the division is : "<<division<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     float celsius,fehrenheit;
//     cout<<"enter the value of celsius"<<endl;
//     cin>>celsius;
//     fehrenheit = celsius*9/5+32;
//     cout<<"the temprature is : "<<fehrenheit<<endl;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     float radius,result;
//     const double pi = 3.14159;
//     cout<<"enter the value of radius"<<endl;
//     cin>>radius;
//     result = pi*radius*radius;
//     cout<<"the area of radius of circle is : "<<result<<endl;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int SI,p,r,t;
//     cout<<"enter principle :"<<endl;
//     cin>>p;
//     cout<<"enter rate : "<<endl;
//     cin>>r;
//     cout<<"enter time : "<<endl;
//     cin>>t;
//     SI = p*r*t/100;
//     cout<<"the simple intrest is : "<<SI<<endl;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter the value of a : "<<endl;
//     cin>>a;
//     cout<<"enter the value of b : "<<endl;
//     cin>>b;
//     int& ref1 = b;
//     int& ref2 = a;
//     cout<<"the value of a is : " <<ref1<<endl;
//     cout<<"the value of b is : " <<ref2<<endl; 
// }
// #include <iostream>
// #include <iomanip>

// using namespace std;

// int main() {
//     int intValue;
//     float floatValue;
//     string strValue;

//     cout << "Enter an integer: ";
//     cin >> intValue;
//     cout << "Enter a floating-point number: ";
//     cin >> floatValue;
//     cout << "Enter a string: ";
//     cin >> strValue;

//     cout << "\nFormatted Output:" << endl;
//     cout << setw(10) << "Integer" << setw(15) << "Float" << setw(20) << "String" << endl;
//     cout << setw(10) << intValue << setw(15) << fixed << setprecision(2) << floatValue << setw(20) << strValue << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
    // char ch;
    // cout << "enter a char value : \n";
    // cin>>ch;
    // if(ch>='a' && ch<='z'){
    //     cout << "Lowecase" << endl;
    // }else{
    //     cout << "Uppercase" <<endl;
    // }
//Q.cheak char uppecase and lowercase
// #include <iostream>
// using namespace std;

// int main(){
//     char ch;
//     cout << "enter a char value : \n";
//     cin>>ch;

//     if(ch>=65 && ch<90){
//         cout << "Uppercase";
//     }else{
//         cout << "Lowercase";
//     }
// }
//cheak number positive or negetive
// #include <iostream>
// using namespace std;


// int main(){
//     int num;
//     cout << "enter a number: \n";
//     cin >>num;
    
//     cout << (num>=0 ? "Positive" : "Negetive") << endl;
//     return 0;
// }
//print number 1 to 5
// #include <iostream>
// using namespace std;


// int main(){
//     int count = 1;
//     while(count<=10){
//         cout << count << '\n';
//         count++;
//     }
// }
//print 1 to 10 number 
// #include <iostream>
// using namespace std;


// int main(){
//     int n = 10;

//     for(int i=1; i<=n; i = i+2){
//         cout << i << endl;
//     }
// }
//print 1 to n number of sum
// #include <iostream>
// using namespace std;


// int main(){
//     int n,sum=0; // i do mistake here pls define sum when you add numbers
//     cout << "Enter a Number : \n";
//     cin >> n;

//     for(int i=1; i<=n; i++){
//         sum+=i;
//     }

//     cout << "the sum is :\n" << sum << endl;
// }
//odd number sum
// #include <iostream>
// using namespace std;


// int main(){
//     int n = 7, oddsum=0;
//     for(int i=1; i<=n; i++){
//         if(i%2!=0){
//             oddsum+=i;
//         }
//     }
//     cout << oddsum;
// }
//while oddsum print
// #include <iostream>
// using namespace std;


// int main(){
//     int n, oddsum=0;
//     cout << "enter the number :\n";
//     cin >> n;
//     int i=1;

//     while(i<=n){
//         if(i%2!=0){
//             oddsum+=i;
//         }
//         i++;
//     }
//     cout << oddsum;
// }

//do while 1 to 10 print
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 10;
//     int i = 1;

//     do {
//         cout << i << "\n";
//         i++;
//        }while(i <= n);

// }

//cheak number is prime or not by for loop
// #include <iostream>
// using namespace std;

// int main(){
//     bool isprime = true;
//     int n;

//     cout << "Enter The Number : \n";
//     cin >> n;

//     for(int i=2; i*i <= n; i++){
//         if(n%i==0){
//             isprime = false;
//             break;
//         }
//     }

//     if(isprime == true){
//         cout << "number is prime";
//     }else{
//         cout << "number is non prime";
//     }
// }
// #include <iostream>
// using namespace std;

// int main(){
//     //column
//     int x = 10;
//     for(int i=1;i<=x;i++){
//         //rows
//        int m = 5;
//        for(int j =1; j<=m; j++){
//        cout << "*";
//        }
//     cout << endl;
//     }
// }

//easy for loop star 
// #include <iostream>
// using namespace std;


// int main(){
//     int n=5;
//     for(int i=0;i<n-1;i++){

//         for(int j=0;j<n-1;j++){
//             cout << '*' << " ";
//         }

//         cout << endl;
//     }
//     return 0;
// }
//pattern square character number
// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         char ch = 'A';
//         for(int j=0;j<n;j++){
//             cout << ch;
//             ch = ch+1;

//         }
//         cout << endl;
//     }
// }
// #include <iostream>
// using namespace std;


// int main(){
//     int n=3;
//     int num=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout << num;
//             num++;
        
//         }
//         cout << endl;
//     }
//     cout << "after pattern value: " << num << endl;
// }

//pattern question solved by me 
// #include <iostream> 
// using namespace std;

// int main(){
//     int n=3;
//     char ch='A';
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout << ch;
//             ch = ch+1;
//         }
//         cout << endl;
//     }
// }
//triangle pattern 1
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<i+1;j++){
//              cout << "*";

//         }
//         cout << endl;
//     }
// }
//triangle pattern number :
// #include <iostream>
// using namespace std;

// int main(){
//     int n  = 4;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout << i+1;
//         }

//         cout << endl;
//     }
// }
//character triangle pattern
// #include <iostream>
// using namespace std;

// int main(){
//     char ch='A';
//     int n = 9;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout << ch;

//         }
//         ch = ch+1;
//         cout<<endl;
//     }
// }
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=i+1;j++){
//             cout << j;

//         }
//         cout <<endl;
//     }
// }
//floyd's triangle pattern
// #include <iostream>
// using namespace std;


// int main(){
//     int n = 4;
//     int num = 1;
//     for(int i=0;i<n;i++){
//         for(int j=i+1; j>0;j--){
//             // cout << j;
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }
//char pattern
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     char ch='A';
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j>0;j--){
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
// }
//triangle patteran 1 21 321 4321
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j>0;j--){
//             cout << j;

//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         //spaces
//         for(int j=0; j<i; j++){
//             cout <<" ";
//         }
//         //rows
//         for(int j=0; j<n-i; j++){
//             cout << (i+1);
//         }
//         cout << endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<n-i;j++){
//             cout << " ";
//         }
//         for(int j=0;j<i;j++){
//             cout << i;
//         }
//         cout << endl;
//     }
// }
#include <iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i=1; i<=n; i++){
        int value = n;
    
    for(int k=1; k<i; k++){
            cout << "*";
        }
        
    for(int j=1; j<=n-i+1; j++){
            cout << value;
            value--;
        }

        cout << endl;

    }
}
