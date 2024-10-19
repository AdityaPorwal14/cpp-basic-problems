//pyramid pattern
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 8;
//     for(int i=0; i<n; i++){

//         for(int j=0; j<n-i-1; j++){
//             cout << " ";
//         }
        
//         for(int j=1; j<=i+1; j++){
//              cout << j;
//         }

//         for(int j=i; j>0; j--){
//             cout << j;
//         }

//         cout << endl;
//     }
// }
//hollow diamond pattern
// #include <iostream>
// using namespace std;

// int main(){
//     int n=16;
//     for(int i=0; i<n; i++){

//         for(int j=0; j<n-i-1; j++){
//             cout << " ";
//         }
//         cout << "*";
//         if(i!=0){
//             for(int j=0;j<2*i-1;j++){
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }
    
//     //bottom
//     for(int i=0;i<n-1;i++){
//         for(int j=0; j<i+1; j++){
//             cout << " ";
//         }
//         cout << "*";

//         if(i != n-2){

//             for(int j=0; j<2*(n-i)-5; j++){
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// ratangle star print 
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout << n-j+1;
//         }
//         cout <<endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     int sum = 1;
//     for(int i=1; i<n; i++){
//         for(int j=1; j<n; j++){
//             cout << sum;
//             sum++;
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i=0; i<n; i++){
//         for(int j=0;j<i+1;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i=1; i<=n; i++){
//         for(int j=0; j<i; j++){
//             cout<< i;
//         }
//         cout << endl;
//     }
// }

//1234 star pattern 1 print
// #include <iostream>
// using namespace std;

// int main(){
//     int sum = 1;
//     int n = 4;
//     for(int i=1; i<=n; i++){
//         for(int j=0; j<i; j++){
//             cout << sum << " ";
//             sum++;
//         }
//         cout << endl;
//     }
// }
// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//             int value = i;
//         for(int j=1;j<=i;j++){
//             cout << value;
//             value++;

//         }
//         cout <<endl;
//     }

// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout << i-j+1;
//         }
//         cout << endl;
//     }
// }
// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<n;j++){
//             char ch = 'A'+ j-1;
//             cout << ch;
//         }
//         cout << endl;
//     }
// }
// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     char ch = 'A';
//     for(int i=1;i<n;i++){
//         for(int j=1;j<n;j++){
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 3;
//     char ch = 'A';
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n;j++){
//             char ch = 'A' + i+j-2;
//             cout << ch;
//             ch++;             
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     char ch = 'A';
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             char ch = 'A' + i-1;
//             cout << ch;
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     char ch = 'A';
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     char ch = 'A';
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             char ch = 'A' + i + j - 2;
//             cout << ch;
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//      int n = 4;
//      char ch = 'A';
//      for(int i=1; i<=n; i++){
//         char start ='A' + n - i;
//         for(int j=1; j<=i; j++){
//             cout << start;
//             start++;
//         }
//         cout << endl;
//      }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     int space;
//     for(int i=1; i<=n; i++){

//         for(int space=1; space<=n-i; space++){
//             cout << " ";
//         }

//         for(int j=1; j<=i; j++){
//             cout << '*';

//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;  // Total number of rows
//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             cout << "*";  // Print stars
//         }
//         cout << endl;  // Move to the next line after each row
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int N = 4;  // Number of rows (height of the triangle)

//     for (int i = 1; i <= N; i++) {
//         // Print spaces
//         for (int j = 1; j < i; j++) {
//             cout << " ";
//         }
//         // Print stars
//         for (int k = 1; k <= (N - i + 1); k++) {
//             cout << "*";
//         }
//         // Move to the next line
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream> 
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i=1; i<=n; i++) {

//         for(int j=1; j<=n-i+1; j++) {
//             cout << "*";
//         }

//         for(int k=1; k<i; k++) {
//             cout << " ";
//         }

//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<i; j++){
//             cout << " ";
//         }
//         for(int k=1; k<=n-i+1;k++){
//             cout << i << "";
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout << " ";
//         }
//         for(int k=1; k<=i; k++){
//             cout << i;
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i=1; i<=n; i++){
//         int value=i;
//         for(int j=1; j<i; j++){
//             cout << " ";
//         }
//         for(int k=1; k<=n-i+1; k++){
//             cout << value;
//             value ++;
            
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i=1; i<=n; i++){
//         int value = i;
//         for(int j=1; j<=n-i; j++){
//             cout << " ";
//         }
//         for(int k=1; k<=i; k++){
//             cout << value;
//             value++;
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int N = 7;  // Number of rows
//     int num = 1;  // Starting number for the pattern

//     for (int i = 1; i <= N; i++) {
//         // Print spaces
//         for (int j = 1; j <= (N - i); j++) {
//             cout << " ";  // Single space for proper alignment
//         }

//         // Print numbers
//         for (int k = 1; k <= i; k++) {
//             cout << num;
//             num++;  // Increment the number
//         }
        
//         // Move to the next line
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;  // Number of rows
    
//     for (int i = 1; i <= n; i++) {
//         // Print leading spaces
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }

//         // Print increasing numbers
//         for (int k = 1; k <= i; k++) {
//             cout << k;
//         }

//         // Print decreasing numbers
//         for (int l = i - 1; l >= 1; l--) {
//             cout << l;
//         }

//         // Move to the next line
//         cout << endl;
//     }

//     return 0;
// }
//print dabang pattern by love babbbar bhaiya
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     for(int i=1; i<=n; i++){
//         int value = n;

//         for(int j=1; j<=n-i+1; j++){
//             cout << j;
//         }

//         for(int k=1; k<i; k++){
//             cout << "*" << "";
//         }
//         // second star print here
    
//         for(int k=1; k<i; k++){
//             cout << "*";
//         }
        
//         for(int j=1; j<=n-i+1; j++){
//             cout << value-i+1;
//             value--;

//         }
//          cout << endl;

//         }

//     }

#include <iostream>
using namespace std;

int printhello(int a, int b){
    int sum = a+b;
    return sum;

}
int main(){
    cout << "the sum is : " << printhello(5,5);

}