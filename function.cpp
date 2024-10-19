// #include <iostream>
// using namespace std;
// void myfunction(string fname){
//     cout << fname << "porwal" << endl;
// }

// int main(){
//     myfunction("aditya");
//     myfunction("rohan");
//     return 0;
// }
// void myFunction(string fname) {
//   cout << fname << " Refsnes\n";
// }
// int main() {
//   myFunction("Liam");
//   myFunction("Jenny");
//   myFunction("Anja");
//   return 0;
// }
// #include <iostream>
// using namespace std;
// string myfunction(string fname){
// return fname;
// }

// int main(){
//     cout << myfunction("aditya porwal") <<endl;
//     cout << myfunction("ashutosh porwal");
// }
// #include <iostream>
// using namespace std;
// int myFunction(int x) {
//   return 5 + x;
// }

// int main() {
//   cout << myFunction(3);
//   return 0;
// }
// #include <iostream>
// using namespace std;
// int myfunction(int age){
//     return age;
// }

// int main(){
//     cout << "your age is : " << myfunction(44) << endl;
//     cout << "your age is : " << myfunction(45) << endl;
// }
// int myfunction(int x, int y){
//     return x + y;
// }

// int main(){
//     int z = myfunction(5,5);
//     cout << "the addition of x + y is : " << z << endl;
// }
// #include <iostream>
// using namespace std;

// void swapnumber(int &x, int &y){
//     int z = x;
//     x = y;
//     y = z;
// }

// int main(){
    // we define firs number and second number because we want to print that number 
    // int firstnumber = 5;
    // int secondnumber = 10;
    //before calling the fun and print numbers
    // cout << "before swap" <<endl;
    // cout << firstnumber << secondnumber << endl;
    // calling the fun and after print numbers 
//     swapnumber(firstnumber, secondnumber);
//     cout << "after swap" << endl;
//     cout << firstnumber << secondnumber;
// }


// int minoftwo(int a, int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

// int main(){
//     cout <<"min : " << minoftwo(40,50) << endl;
//     cout << minoftwo(60,22);
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int sumofnum(int n){
//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         sum+=i;
//     }
//     return sum;
// }

// int main(){
//     cout <<"the sum is : " << sumofnum(5) <<endl;
//     cout << sumofnum(6);
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
    
//     return fact;
// }
// int main(){
//     cout << factorial(5);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int sum(int a, int b){
//     int c = a+b;
//     return c;   
// }

// int main(){
//     int num1, num2;
//     cout << "enter the first number : "<< endl;
//     cin >> num1;
//     cout << "enter the second number : "<<endl;
//     cin >> num2;
//     cout <<"the total number of sum is : "<< sum(num1,num2) <<endl;
//     good();
//     return 0;
// }
//doubt 1;
// void good(){
//     cout << "hello good morning";
// }
// #include <iostream>
// using namespace std;

// void usa(){
//     cout << "you are in usa\n";
//     return; //after use the return function is end and after the write condition is not excute
//     cout << "you are in japan";
// }

// void india(){
//     cout << "you are in india\n";
//     return;
//     cout << "you are in log angels";
// }

// int main(){
//     usa();
//     india();
// }

// #include <iostream>
// using namespace std;

// void usa(){
//     cout << "you are in usa\n";
// }

// void india(){
//     cout << "you are in india\n";
//     usa();
// }
// int main(){
//     cout << "you are in main\n";
//     india();
// }
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     // cout << pow(2,4);
//     // cout << sqrt(3);
//     cout << cbrt(10);
//     return 0;
// }
//combination
// #include <iostream>
// using namespace std;

// int fact(int x){
//     int f = 1;
//     for(int i =1; i<=x; i++){
//         f*=i;
//     }
//     return f;
// }

// int main(){
//     int n;
//     cout <<"enter the number of n :" <<endl;
//     cin >> n;

//     int r;
//     cout << "enter the number of r : " <<endl;
//     cin >> r;

//     int a = fact(n);
//     int b = fact(r);
//     int c = fact(n-r);
//     cout << a/(b*c);
// }
//permutation
// #include <iostream>
// using namespace std;
// int fact(int x){
//     int f = 1;
//     for(int i=1; i<=x; i++){
//         f = f*i;
//     }
//     return f;
// }

// int main(){
//     int n;
//     cout << "enter the value of n";
//     cin >> n;

//     int r;
//     cout << "enter the value of r";
//     cin >> r;

//     int a = fact(n);
//     int c = fact(n-r);
//     cout << a/(c);
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int fact(int x){
//     int f = 1;
//     for(int i=1; i<=x; i++){
//         f = f * i;
//     }
//     return f;
// }

// int ncr(int n, int r){
//     return fact(n)/(fact(r)*fact(n-r));
// }

// int main(){
//     int n;
//     cout << "enter the value of n : ";
//     cin >> n;
//     for(int i=0; i<=n; i++){

//         for(int j=0;j<=n-i;j++){
//             cout<<" ";
//         }

//         for(int j=0;j<=i;j++){
//             cout << ncr(i,j)<<" ";
//         }

//         cout << endl;
//     }
// }
//swap two number without using third variable 
// #include <iostream>
// using namespace std;

// int main(){
//     int x = 4;
//     int y = 6;
//     cout << x <<y;
//     x = x+y;
//     y = x-y;
//     x = x-y;
//     cout << x << y;
// }
// #include <iostream>
// using namespace std;

// int main(){
    /*int num = 100;
    int *ptr = &num;
    cout <<"the memory address of the num is :"<< &num << endl; //memory address of num;
    cout << "the value of the num is : "<< (*ptr)++ << endl; //value of num 100;

    double d = 6.4;
    double *p2 = &d;
    cout << "the value of d is : " <<*p2;*/

    /*int i = 5;
    int *p3 = &i;
    cout <<p3 << endl;  //address of i 
    cout <<*p3; //value of i 5

    int *p = 0;
    p = &i;
    cout << "addresss of p is : " << p << endl;
    cout << "address of &i is : " << &i << endl;*/

    /*int num = 5;
    int *p = &num;
    (*p)++;
    cout << "value increase of num is : ";
    cout << num;*/
    
    /*int num = 5;
    int *p = &num;

    int *q = p;
    cout << *p << "\n" <<*q <<endl;   //5
    cout << &p << "\n" <<&q; //memory address both*/

// }
// #include <iostream>
// #include <math.h>
// using namespace std;

// int main(){
    //value copy 
    /*int num = 5;
    int *p = &num;
    int *q = p;
    cout << "the value of *q is : " << *q << endl;
    cout << "the value of *p is : " << *p << endl;*/

    //value increase 
    /*int num = 5;
    int *p = &num;
    // (*p)++;
    num = num + 1;
    cout << "num value is : " << num << endl;*/

    /*int a = 5;
    int *b = &a;
    int *c = &a;
    //if you want to print the address you can write only variable name 
    cout << b << endl;  
    cout << c << endl;*/

    /*double d = 5.4;
    //you can initilize double when you pass address of d otherwise show error
    double *p2 = &d; 
    cout << "address is : " << p2 << endl;
    cout << "value is : " << *p2 << endl;*/

    //swap two number using pointer
    /*int a = 5;
    int b = 6;
    int *p1 = &a;
    int *p2 = &b;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << *p1 << endl << *p2;*/

    /*int a = 10;
    int b = 20;
    const int * p = &a;
    p = &b;
    cout << p <<endl;*/

    /*float n;
    cout << "enter the number of n : " <<endl;
    cin >> n;

    float ans = 0;
    float i = 0;
    while(n!=0){
        float bit = n & 1;
        ans = (bit * pow(10 , i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << "answer is : " <<ans << endl;*/

/*#include <iostream>
#include <math.h>
using namespace std;
int main();

{
    int n;
    cout << "Enter the value of N \n";
    cin >> n;
    int ans = 0;
    int i=0, m=1;
    while(n!=0){
        int bit = n%2;
        ans = (bit * m ) + ans;
        i++;
        n = n/2;
        m = m * 10;
    }
    cout << ans << endl;

}
}*/

//decimal to binary number conversion -
#include <iostream>
using namespace std;
int dectobinary(int decnum){
    int ans = 0, pow = 1;
    while(decnum>0){
    int rem = decnum % 2;
    decnum /= 2;

    ans += (rem * pow);
    pow *= 10;
    
    }
    return ans;
}

int main(){
    int decnum;
    cout <<"enter the value of decimal number : ";
    cin >> decnum;
    // cout << dectobinary(decnum) << endl;

    for(int i=1; i<=decnum; i++){
        cout << dectobinary(i) << endl;
    }
}

//binary to decimal number conversion -
#include <iostream>
using namespace std;

int ans = 0, pow = 1;
int binarytodec(int binarynum){
    while(binarynum>0){
        int rem = binarynum % 10;
        ans += rem * pow;

        binarynum /= 10;
        pow *= 2;

    }

    return ans;

}

int main(){
    int binarynum;
    cout <<"enter the value of binary number : " <<endl;
    cin >> binarynum;

    cout <<"Your decimal number is : " << binarytodec(binarynum) << endl;

}
#include <iostream>
using namespace std;

int main(){
    cout << sizeof(long long int) << endl;
    cout << sizeof(signed) << endl;
    cout << sizeof(unsigned) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(short) << endl;
    cout << sizeof(long long) << endl;


}