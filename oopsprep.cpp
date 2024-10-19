/*#include <iostream>
using namespace std;

class hero{     //hero is a class name 
    private:
    int health; //this is a data memeber and arrtibute of class
    public:
    char level;
    void print() {
        cout << level << endl;
    }

    int gethealth() {
        return health;
    }

    char getlevel() {
        return level;
    }

    void sethealth(int h) {
        health = h;
        
    }

    void setlevel(char ch) {
        level = ch;

    }
};


int main(){
    //statically
    hero a;
    a.sethealth(80);  //ERROR - 2 i have show error here becaue i enter wrong value i give char in int and int in char 
    a.setlevel('P');
    cout << "Level is :" <<a.level << endl;
    cout << "health is : " << a.gethealth() << endl;

    //dynamically
    hero *b = new hero;
    b->sethealth(90);
    b->setlevel('Q');
    cout << "level is :" <<(*b).level <<endl;
    cout << "level is :" <<(*b).gethealth() <<endl;


    cout << "level is :" << b->level << endl;
    cout << "health is :" << b->gethealth() << endl;


    /*hero h1;  //this is a object of a class 
    cout << "size : " << sizeof(h1) << endl;*/

    /*hero ramesh;
    cout << "ramesh health is : " <<ramesh.gethealth() <<endl;
    //use satter 
    ramesh.sethealth(70);
    ramesh.level = 'A';
    cout << "ramesh level is : " <<ramesh.level <<endl;
    cout << "ramesh health is : " <<ramesh.gethealth() <<endl;*/

    // ramesh.health = 15;
    /*ramesh.level = 'A'; //i got error 1 here because i assign value string and it is char data type
    cout << "health is : " << ramesh.gethealth() <<endl;
    cout << "level is : " << ramesh.level <<endl;*/
   
/*#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int rnm;
    float gpa;
    int age;

};

//third way to print the number 
void print(student s){
    cout << s.name << " " <<s.rnm << " " << s.gpa << " " <<s.age << endl;
}

void change(student &s){      //pass by reference &
    s.name = "Rohan Porwal";  
}

int main(){
    student s1;
    s1.name = "Aditya Porwal";
    s1.rnm = 240020;
    s1.gpa = 9.19;
    s1.age = 18;

    print(s1);   //s1 sends value to function patameter s
    change(s1);  //name change aditya porwal to rohan porwal by & operator
    print(s1);*/


    /*student s2;
    s2.name = "Rohan Porwal";
    s2.rnm = 250030;
    s2.gpa = 9.9;
    s2.age = 20;

    student s3;
    s3.name = "Ashutosh Porwal";
    s3.rnm = 240050;
    s3.gpa = 9.99;
    s3.age = 19;

    print(s1);
    print(s2);
    print(s3);*/

    /*cout << s1.name <<endl;
    //1st way to print the number 
    cout << s1.rnm <<endl;
    cout << s1.age <<endl;
    cout << s1.gpa <<endl;

    cout <<endl;

    cout << s2.name <<endl;
    cout << s2.rnm <<endl;
    cout << s2.age <<endl;
    cout << s2.gpa <<endl;*/
    
    // 2nd way to print the number 
    // cout << s2.name << " " <<s2.rnm << " " << s2.gpa << " " <<s2.age << endl; 

// #include <iostream>
// using namespace std;

// class student {
//     public:
//     string name;
//     int rnm;
//     float gpa;
//     int age;

//     student(string s, int r, float g, int a){ // Correct type 'float' here
//         name = s;
//         rnm = r;
//         gpa = g;
//         age = a;
//     }
// };

// int main(){
//     student s1("Aditya Porwal", 240020, 9.19f, 18); // 'f' suffix to indicate a float literal
//     cout << "Student Name: " << s1.name << "\nRoll No: " << s1.rnm << "\nGPA: " << s1.gpa << "\nAge: " << s1.age << endl;
// }

// #include <iostream>
// using namespace std;

// class cricketers{
//     public:
//     string name;
//     int score;

//     cricketers(string name, int score){
//         this -> name = name;
//         this -> score = score;
//     }


// };

// int main(){
//     cricketers c1("Virat Kohali",25000);
//     cout << c1.name << " " << c1.score << endl;

//     cricketers c2("Rohit Jadega", 20000);
//     cout << c2.name << " " << c2.score << endl;

// }

//btch diploma LEEP student 
// #include <iostream>
// using namespace std;
// class student{
//     public:
//     string name;
//     string rno;
//     int age;
//     int cname;

//     student (string n, int a, string r){
//         name = n;
//         age = a;
//         rno = r;
//     }

//     student(){}
// };
// //function
// void print(student s){
//     cout << s.name <<" "<< s.age <<" "<< s.rno <<endl;
// }

// int main(){
//     student s1("Aditya porwal",18,"L240020");
//     print(s1);// calling funtion to print s1;

//     student s2;
//     s2.name = "Aditya Porwal";
//     s2.rno = "L240020";
//     s2.age = 18;
    // s2.age = 30; //value overight 
    // cin >> s1.cname;

    /*student s1;
    s1.name = "Aditya Porwal";
    s1.rno = "L240020";
    s1.age = 18;
    // cin >> s1.cname;

    student s2;
    s2.name = "Arun Yadav";
    s2.rno = "L240003";
    s2.age = 19;

    student s3;
    s3.name = "Aaradhaya Mantri";
    s3.rno = "L240009";
    s3.age = 19;

    student s4;
    s4.name = "Akshat Pandey";
    s4.rno = "L240021";
    s4.age = 18;

    student s5;
    s5.name = "Ankit Kumar";
    s5.rno = "L240026";
    s5.age = 19;*/


//print through value 
    /*cout << s1.name << " " << s1.age << " " << s1.rno <<s1.cname<< endl;    
    cout << s2.name << " " << s2.age << " " << s2.rno << endl;    
    cout << s3.name << " " << s3.age << " " << s3.rno << endl;    
    cout << s4.name << " " << s4.age << " " << s4.rno << endl;*/

// print through function
    // print(s1);
    // print(s2);
    // print(s3);

// }

// #include <iostream>
// using namespace std;

// class student {
//     public:
//     string name;
//     int rno;
//     float gpa;

// // student(){ //constructor 1

// // }

// student(string s, int r){  //constructor 2
//     name = s;
//     rno = r;

// }

// student(string s, int r, float g){ //constructor 3
//     name = s;
//     rno = r;
//     gpa = g;

//     }
// };

// int main(){
//     student s1("Aditya Porwal",76,9.19);

//     student s2("Ashutosh Porwal",100,9.5);
//     // s2.name = "Ashutosh Porwal";
//     // s2.rno = 100;
//     // s2.gpa = 9.5;
//     student s3 = s2; //copy constructor deep copy method 1
//     student s4(s1); //copy constructor deep copy method 2
//     s4.name = "Shreyanse porwal";
//     s4.gpa = 9.99; //we can also change value 

//     cout << s1.name << " " << s1.rno << " " << s1.gpa << endl;
//     cout << s4.name << " " << s4.rno << " " << s4.gpa << endl;
//     cout << s2.name << " " << s2.rno << " " << s2.gpa << endl;
//     cout << s3.name << " " << s3.rno << " " << s3.gpa << endl;


// }
// #include <iostream>
// using namespace std;

// class cricketers{
//     public:
//     string name;
//     int runs;
//     float avg;

//     cricketers(string name, int runs,float avg){
//         this -> name = name;
//         this -> runs = runs;
//         this -> avg = avg;

//     }

//     void print(){
//         cout << name << " "<< runs << " " << avg <<endl;
//     }

//     int matche(){
//         return runs/avg;
//     }

//     void change(cricketers* c) {
//         // (*c).avg = 77.2;
//         c->avg = 77.79;
//     }
// };

// int main(){
//     cricketers c1("Virat Kohali", 25000, 55.2);
//     cricketers c2("Rohit Jadega", 18000, 47.8);
//     c1.print();
//     c2.print();

//     cout << c1.matche() << endl;
//     cout << c2.matche() << endl;

//     // cricketers* p1 = &c1;
//     // cout << (*p1).name;
//     // (*p1).avg = 77.5;
//     // cout << (*p1).avg;

//     c1.change(&c1);
//     cout << c1.avg <<endl;


// }
// #include <iostream>
// using namespace std;
// class cricketers{
//     public:
//     string name;
//     int runs;
//     float avg;

//     cricketers(string name, int runs, float avg){
//         name = name;
//         runs = runs;
//         avg = avg;

//     }

// };

// int main(){
//     cricketers c1("Virat Kohali", 20000, 70.99);
//     cout << c1.name<< c1.runs << c1.avg<< endl;
//     cricketers* c2 = new cricketers("Rohit Sharma", 14000, 50.67);
//     cout << c2->name << " " << c2->runs << " " <<c2->avg;
// }

// #include <iostream>
// using namespace std;

// class Hero {
//     private:
//     int health;
//     public:
//     char level;

//     Hero(){
//         cout << "constructor called" <<endl;        

//     }

//     Hero (Hero& temp) {
//         // cout << "copy constructor called" << endl;
//         this ->health = temp.health; 
//         this -> level = temp.level;

//         // cout << health << endl;
//         // cout << level << endl;

//     }

//     Hero(int health){
//         cout << "this ->" << this << endl;
//         this -> health = health;  
//         cout <<"health is : " << health <<endl;  
//     }

//     Hero(int health, char level){
//         cout << "HEro S constructor" << endl;
//         this -> level = level;
//         this -> health = health;
//     }

//     void print(){
//         cout << health << endl;
//         cout << level << endl;
//     }

//     // int gethealth(){
//     //     return health;
//     // }

//     // char getlevel(){
//     //     return level;
//     // }

//     // void sethealth(int h){
//     //     health = h;
//     //     cout << "Ramesh Health is : " << health << endl;
//     // }

//     // void setlevel(char ch){
//     //     level = ch;
//     // }

// };

// int main(){
//     Hero ramesh(10);
//     // cout << "address of ramesh is : " << &ramesh << endl;
//     // ramesh.sethealth(10);
//     // // ramesh.gethealth();

//     // Hero *h = new Hero();
//     Hero temp(18, 'A');
//     temp.print();

//     Hero S(22,'S');
//     Hero R = S;
//     S.print();
//     R.print();



// }


// #include <iostream>
// using namespace std;

// class employee{
//     private:
//     int salary;
//     public:
//     void setsalary(int s){
//         salary = s;
//     }

//     int getsalary(){
//         return salary;
//     } 
// };

// int main(){
//     employee myobj;
//     myobj.setsalary(500000);
//     cout <<"Salary is " << myobj.getsalary();
//     cout << endl;


//     employee *b = new employee;
//     b->setsalary(200000);

//     cout << "salary is " << (*b).getsalary() << endl;
//     cout << "Salary is " << b->getsalary() << endl;
//     return 0;
// } 

/*#include <iostream>
#include <string.h>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;
    string name;

    Hero(){
        cout << " Default Constructor" << endl;
        name = new char[100];
    }

    Hero(int health){
        health = health;
    }

    void print(){
        cout << endl;
        cout << "[name : ]" <<this -> name << " ";
        cout << "[health :]" << this -> health << " ";
        cout << "[level : ]" << this -> level << " ";
        cout << endl;
    }

    void setname(char name[]){
        strcpy(this->name, name);
    }

    int gethealth(){
        return health;
    }

    int sethealth(int health){

    }

    int getlevel(){
        return level;
    }

    int setlevel(int level){
        return health;
    }

};

int main(){
    Hero Ramesh;
    cout << "Address of Ramesh" << &Ramesh << endl;
    Ramesh.gethealth();

    Hero Hero1;
    Hero1.sethealth(122);
    Hero1.setlevel('A');
    char name[7] = "Babbar";
    Hero1.setname(name);

    Hero1.print();

    Hero Hero2(Hero1);
    Hero2.print();


}*/

// #include <iostream>
// using namespace std;

// class student{
//     public:
//     string* namePtr;
//     float* cgpaPtr;

//     student(string name, float cgpa){
//         cgpaPtr = new float;
//         *cgpaPtr = cgpa;
//         namePtr = new string;
//         *namePtr = name;        //don't change postion otherwise program not show eroor and don't return output  
//     }

//     student(student &obj){
//         this->namePtr = obj.namePtr;
//         this->cgpaPtr = obj.cgpaPtr;

//     }

//     void getinfo(){
//         cout << "name of student " << *namePtr << endl;
//         cout << "cgpa of student " << *cgpaPtr << endl;
//     }

// };

// int main(){
//     student S1("Aditya Porwal" , 9.16);
//     student S2(S1);
//     // S2.name = "Ashutosh Porwal";
//     S1.getinfo();

//     *(S2.cgpaPtr) = 9.2;
//     *(S2.namePtr) = "Ashutosh Porwal";
//     S2.getinfo();

// }

// #include <iostream>
// using namespace std;
// class student{
//     public: // if you remove public from here it show error their is no other option
//     string name;
//     float cgpa;

// student(string name, float cgpa){
//     this->name = name;
//     this->cgpa = cgpa;
//     }

//     void output(); // function defination

    
// };

// void student :: output(){  // function initilization
//         cout<< name << " " << cgpa << " " <<endl;
//     }

// int main(){
//     student s1;
//     s1.name = "Aditya";
//     s1.cgpa = 9.99;
//     student s2 = s1;

//     s1.output();
//     s2.output();

//     cout << &s1 <<endl;
//     cout << &s2 <<endl;

// }

/*#include <iostream>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;

    Hero(){}

    Hero(Hero& temp){
        cout << "constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
        cout << health << endl;
        cout << level << endl;
        cout << this <<endl;

    }

        Hero(int health){
            this->health = health;
        }

        Hero(int health, char level){
            this->level = level;
            this->health = health;
        }

        //destructor called
        ~Hero(){
            cout << "destructor called"<<endl;
        }

        void print(){
            cout << this -> health << endl;
            cout << this -> level << endl;
        }

        int getheaalth(){
            return health;
        }

        int getlevel(){
            return level;
        }

        void sethealth(int h){
            health = h;
        }

        void setlevel(int ch){
            level = ch;
        }
};

    int main(){
        Hero ramesh(10);
        Hero temp(18,'A');
        temp.print();

    Hero S(22,'S');
    // Hero R(23,'r');
    Hero R = S;
    S.print();

    R.sethealth(50);   // Change health of R
    R.setlevel('B');   // Change level of R

    R.print();

    Hero aditya(99,'A');
    Hero* ashutosh = new Hero(100, 'B');


    //dynamic allocation method 1 
    cout << aditya.getheaalth() << aditya.getlevel() << endl;
    cout << (*ashutosh).getheaalth() << (*ashutosh).getlevel() <<endl;

    //dynamic allocation method 2
    cout << aditya.getheaalth() << aditya.getlevel() <<endl;
    cout << ashutosh->getheaalth() <<ashutosh->getlevel() <<endl;

    // delete ashutosh; //
    // cout << ashutosh->getheaalth() <<ashutosh->getlevel() <<endl;//


cout << &S << endl;  // Print address of S
cout << &R << endl;  // Print address of R


}*/

// #include <iostream>
// using namespace std;
// class customer {
//     public:
//     string name;      // Customer's name
//     int* balance;     // Pointer to the balance (dynamic memory)

//     // Constructor
//     customer(string name, int bal) {
//         this->name = name;         // Assign the provided name to the object's name
//         balance = new int;         // Dynamically allocate memory for balance
//         *balance = bal;            // Set the value of balance to/by 'bal'
//     }

//     // Destructor
//     ~customer() {
//         cout << "Name is " << name << endl;            // Output customer's name
//         cout << "balance is " << *balance << endl;     // Output the value of balance
//     }
// };

// int main(){
//     customer A1("Aditya porwal", 20000);  // Create an object of the customer class
//     return 0;  // The object goes out of scope here, so the destructor is called
// }

// #include<iostream>
// #include <string>
// using namespace std;

// class A {
// public:
//     int x;

//     void incx(){
//         x++;
//     }
// };

// class ABC {
// public:
//     ABC(){
//         cout << "constructor" <<endl;
//     }

//     ~ABC(){
//         cout << "deconstructor" <<endl;
//     }
// };

// int main(){
//     // obj1.x = 100;
//     // obj2.x = 200;
//     // cout << obj1.x <<endl;
//     // cout << obj2.x <<endl;

//     // obj1.incx();
//     // obj2.incx();

//     // cout << obj1.x << endl;
//     // cout << obj2.x << endl;

//     if(true){
//         static ABC obj;
//         // ABC obj;
//     }

//     cout <<"end of fun" <<endl;


//     return 0;
// }

//inheritence programme
// #include <iostream>
// using namespace std;

// class account{
//     public:
//     float salary = 5000;
// };

// class programmer : public account{
//     public:
//     float bonus = 5000;
// };

// int main(){
//     programmer p1;
//     cout << "salary : " <<p1.salary(){
//         p1.bonus;
//     }
// }

//constant variable
// #include <iostream>
// using namespace std;

// int main(){
//     const int y = 10;
//     cout << y << endl;

//     return 0;
// }

//constant keyword with pointer variables: syntax const data_type* var_name;
// #include <iostream>
// using namespace std;

// int main(){
//     int x{10};
//     char y{'M'};

//     const int* i = &x;
//     const char* j = &y;

//     x = 9;
//     y = 'A';

//     cout << *i << endl;
//     cout << *j << endl;

// }

//const pointer variable point the value : syntax data_type* const var_name;
// #include <iostream>
// using namespace std;

// int main(){
//     int x = 5;
//     int y = 6;

//     char A = 'A';
//     char B = 'B';

//     int* const i = &x;
//     char* const j = &A;

//     cout << *i << *j << endl;

//     *i = 10;
//     *j = 'D';

//     cout << *i << " " << *j << endl;
//     cout << i <<" " << j << endl;

// }

//banking system by oops
// #include <iostream>
// using namespace std;
// class customer{
//     string name;
//     int account_number;
//     int balance;
//     int age;
//     static int total_customer;
//     static int total_balance;

//     public:
//     customer(string name, int account_number, int balance, int age){
//         this->name = name;
//         this->account_number = account_number;
//         this->balance = balance;
//         this->age = age;
//         total_customer++;
//         total_balance+=balance;
//     }

//     static void access_static(){
//         cout <<"total number of customer is : "<< total_customer << endl;
//         cout <<"total balance in bank is : "<< total_balance << endl;
//     }

//     void deposite(int amount){
//         if(amount>0){
//             balance+=amount;
//             total_balance+=amount;
//         }
//     }

//     void withdraw(int amount){
//         if(amount>0 && amount<=balance){
//             balance-=amount;
//             total_balance-=amount;
//         }
//     }

//     void update_age(int age){

//         if(age>0 && age<100){
//             this->age = age;

//         }else{
//             cout <<"invalid age";
//         }

//     }

//     void print(){
//         cout << this->name << " " << this->account_number << " " << this->balance << " " << total_customer <<" "<< age <<endl;
//     }

//     void display_total_customer(){
//         cout <<"The Number Of The Total Customer Is : " << total_customer << endl;
//     }

//     static void set_total_customer(int new_total){
//         total_customer = new_total;
//     }

//     static int get_total_customer(){
//         return total_customer;
//     }
// };

// int customer :: total_customer = 0;
// int customer :: total_balance = 0;

// int main(){
//     customer A1("aditya porwal", 101, 10000,18);
//     customer A2("Ashutosh porwal", 202, 20000,19);
//     customer A3("Rohan porwal", 303, 30000,20);

//     A1.update_age(20);
//     A1.print();
//     A2.print();
//     A3.print();
//     A3.deposite(10000);
//     A2.withdraw(2200);
//     customer::access_static();

//     // A1.display_total_customer();

//     // customer::set_total_customer(5);
//     // A1.get_total_customer();

//     // cout <<"using getter"<<" "<< customer::get_total_customer()<< endl;

// }

// #include <iostream>
// using namespace std;

// class human{
//     public:
//     int a;
//     protected:
//     int b;
//     private:
//     int c;

//     void output(int a, int b , int c){
//         this->a = a;
//         this->b = b;
//         this->c = c;

//     }
// };

// int main(){
//     human h1;
//     h1.a = 10;
//     cout<<h1.a << endl;
    

// }

// #include <iostream>
// using namespace std;

// class student{
//     private:
//     string name;
//     int age;
//     int height;

//     public:
//     int output(int height){
//        return this->height = height;
//     }

// };

// int main(){
//     student s1;
//     cout << s1.output(10);
// }
//inheritence

// #include<iostream>
// using namespace std;

// class animal{
//     public:
//     void speak(){
//         cout <<"Animal Speaking";
//     }

// };

// class dog : public animal {
//     public:
//     void bark(){
//         cout <<"Dog is Barking";
//     }
// };

// int main(){
//     dog Dog;
//     animal a1;

//     Dog.bark();
//     cout<<endl;

//     Dog.speak(); //parent base class functionlity come to the child class functionility
//     cout<<endl;

//     a1.speak();
//     cout<<endl;
// }

//inheritence example 2
// #include <iostream>
// using namespace std;

// class person{
//     public:
//     string name;
//     int age;

//     person(){}

//     person(string name, int age){
//         this->name = name;
//         this->age = age;
//     }
// };

// class student : public person{
//     public:
//     float rollno;

//     void getinfo(){
//         cout << name << endl;
//         cout << age << endl;
//         cout << rollno << endl;
//     }

// };

// int main(){
//     student s1;

//     s1.name = "Aditya Porwal";
//     s1.age = 18;
//     s1.rollno = 0001;

//     s1.getinfo();
// }

//private(with functions getters protected 
/*#include <iostream>
using namespace std;

class Human{
    private:
    string name;
    int age, weight;

    public:
    void fun(string name, int age, int weight){
        this->name = name;
        this->age = age;
        this->weight = weight;
    }

    string getname(){
        return name;
    }

    int getage(){
        return age;
    }

    int getweight(){
        return weight;
    }
};

class student : protected Human{
    private:
    int rollno, fees;


    public:
    void display(){
        cout << getname() <<" "<< getage() <<" "<< getweight() << endl;
    }
};

int main(){
    student A;
    A.fun("Aditya", 18, 47);
    A.display();

}*/

//Program number 2 by inheritence 
/*#include <iostream>
using namespace std;

class Human {
    private:
        string name;
        int age, weight;

    public:
        // Public function in Human to set values
        void fun(string name, int age, int weight) {
            this->name = name;
            this->age = age;
            this->weight = weight;
        }

        // Public getter functions to access private members
        string getname() {
            return name;
        }

        int getage() {
            return age;
        }

        int getweight() {
            return weight;
        }
};

class student : protected Human {
    private:
        int rollno, fees;

    public:
        // Create a public function to access the protected 'fun()' from the parent class
        void setDetails(string name, int age, int weight) {
            // Call the protected function 'fun()' of Human class
            fun(name, age, weight);
        }

        // Public function to display details
        void display() {
            cout << getname() << " " << getage() << " " << getweight() << endl;
        }
};

int main() {
    student A;

    // Now call the public function in 'student' to set the details
    A.setDetails("Aditya", 18, 47);

    // Display the details
    A.display();  // Output: Aditya 18 47
}*/

/*#include <iostream>
using namespace std;

class Human{
    public:
    string name;
    int age, weight;

    public:
    Human(string name, int age){
        this->name = name;
        this->age = age;
    }

    Human(){}

    public:
    void display(){
        cout << name << " " << age << " " <<endl;
    }
};

class student : public Human{
    private:
    int rollno, fees;

    public:
    student(string name, int age, int weight) : Human(name,age) {
        this->name = name;
        this->age = age;
        this->weight = weight;
    }

    student(){}

    public:
    void display(){
        cout << this->name <<" "<< this->age <<" "<< this->weight << endl;
    }

};

class Teacher : public Human {
        float salary;
        int id;

        public:
        Teacher(string name, int age, int id, float salary, int weight): Human(name,age){
            this->name = name;
            this->age = age;
            this->id = id;
            this->salary = salary;
            this->weight = weight;
        }

        Teacher(){}

        void display() {
        cout << this->name << " " << this->age << " " << this->id << " " << this->salary << " " << this->weight << endl;
    }

    };

int main(){
    student A1("Aditya", 18, 47);
    A1.display();

    // b.name = "Maina mam";
    Teacher b1("Maina mam", 25, 0001, 25000, 99);
    b1.display();
}*/

/*#include <iostream>
using namespace std;

class person{
    protected:
     string name;
    public:
     void introduce(){
        cout <<"hello my name is : " << name << endl;
    }
};

class employee : public person {
    protected:
     int salary;
    public:
     void monthly_salary(){
        cout <<"my monthly salary is : " << salary << endl;
    }

    void setsalary(int salary){
        this->salary = salary;
    }

    void getsalary(){
        cout <<"your change salary is : "<< salary << endl;
    }
};

class manager : public employee {
    public:
      string department;
      manager(string name, int salary, string department){
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void work(){
        cout << "i am leading to the department : " << department << endl;
    }

};

int main(){
    manager A1("Aditya Porwal", 200000, "finance");
    A1.introduce();
    A1.monthly_salary();
    A1.work();

    cout<<endl;

    A1.setsalary(5000000);
    A1.getsalary();
}*/

//multi level inheritence 
/*#include <iostream>
using namespace std;

class Engineer{
    public:
     string specilization;
     void work(){
        cout <<"i have spacilization in : " <<specilization << endl;
     }
};

class Youtuber{
    public:
     int subscribers;
     void content_creator(){
        cout << "i have subscribers base : " <<subscribers << endl;
     }
};

class codeTeacher : public Engineer, public Youtuber {
    public:
     string name;
     codeTeacher(string name, string specilization, int subscribers){
        this->name = name;
        this->specilization = specilization;
        this->subscribers = subscribers;
     }

    void showcase(){
        cout << "my name is : " << name << endl;
        work();
        content_creator();
    }
};

int main(){
    codeTeacher A1("Aditya Porwal", "CSE", 500000);
    A1.showcase();
}*/

//hybrid inheritence 
/*#include <iostream>
using namespace std;

class student{
    public:
     void print(){
        cout << " i am student"<<endl;
     }
};

class male{
    public:
    void maleprint(){
        cout<<"i am male"<<endl;
    }
};

class female{
    public:
     void feamleprint(){
        cout <<"i am female"<<endl;
     }
};

class boy : public student, public male{
    public:
     void boyprint(){
        cout<<"i am boy"<<endl;
     }
};

class girl : public student {
    public:
     void girlprint(){
        cout <<"i am girl"<<endl;
     };
};

int main(){
    girl g1;
    g1.print();
    g1.girlprint();
}*/

//multipath inheritance 
/*#include <iostream>
using namespace std;

class Human{
    public:
     string name;
     void display(){
        cout <<"my name is : "<<name<<endl;
     }
};

class Engineer : public virtual Human{
    public:
     string specilization;
     void work(){
        cout <<"i have specilization in :" << specilization<<endl;
     }
};

class youtuber : public virtual Human{
    public:
     int subscribers;
     void contenctcreator(){
        cout <<"i have subscrivers base on : " <<subscribers<<endl;
     }
};

class codeteacher : public youtuber, public Engineer{
    public:
     int salary;
     codeteacher(string name, string specilization, int subscribers, int salary){
        this->name = name;
        this->specilization = specilization;
        this->salary = salary;
        this->subscribers = subscribers;
     }
};

int main(){
    codeteacher A1("Rohit", "CSE", 4100111, 99);
    A1.display();
    A1.work();
    A1.contenctcreator();
}*/

/*#include <iostream>
using namespace std;

class Area{
    public:
     int calulatearea(int r){
        return 3.14*r*r;
     }

     int calculateractangle(int l, int b){
        return l*b;

     }
};

int main(){
    Area A1,A2;
    cout << A1.calulatearea(4) << endl;
    cout << A2.calculateractangle(3,4)<< endl;
}*/

//polymorphism function overloading 
#include <iostream>
using namespace std;

class print {
public:
    void show(int x) {
        cout <<"int is : " << x << endl;

    }

    void show(char ch) {
        cout << "char is : " << ch << endl;
    }
};

int main(){
    print p1;
    p1.show(33);
    p1.show('A');
}