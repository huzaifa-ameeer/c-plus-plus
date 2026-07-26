//contructor and destructor

// #include<iostream>
// using namespace std;

// class Student {
//     public:
//     string name;
//     int age;

//     Student(){
//         cout<<"Constructor is called";
//     }
// };

// int main (){
//     Student S1;
//     return 0;
// }

// #include<iostream>
// using namespace std; 

// class Customer {
//     string name;
//     int acc_num, balance;
//     public:
//     Customer(string name, int acc_num, int balance){
//         this-> name= name;
//         this-> acc_num= acc_num;
//         this-> balance= balance;
//     }
// };

// int main (){
//     Customer c1("Huzaifa", 123, 5000);
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Customer {
//     string name;
//     int acc_num;
//     int balance;


//     public:

//     //default constructor
//     Customer(){
//         name= "Huzaifa";
//         acc_num= 123;
//         balance= 1000;
//     }

    // parameterized constructor with 3 arguments
    // Customer(string name, int acc_num, int balance){
    //     this-> name= name;
    //     this-> acc_num= acc_num;
    //     this-> balance= balance;
    // }


    //inline constructor
//     inline Customer(string a, int b, int c): name(a), acc_num(b), balance(c){

//     }

//     //parameterized constructor with 2 arguments
//     Customer(string name, int acc_num){
//         this-> name= name;
//         this-> acc_num= acc_num;
//         balance= 100;
//     }

//     void display(){
//         cout<<"Name: "<<name<<"\nAccount Number: "<<acc_num<<"\nBalance: "<<balance<<endl<<"-----\n";
//     }
// };

// int main (){
//     Customer A1;
//     Customer A2("Ali", 123, 1000);
//     Customer A3("Zubair", 123);
//     A1.display();
//     A2.display();
//     A3.display();
// }


//copy contructor

#include<iostream>
using namespace std;

class Customer {
    private:
    string name;
    int balance;
    public:
    Customer(string a, int b){
        name = a;
        balance = b;
    }
    Customer(Customer &B){
        name = B.name;
        balance= B.balance;
    }
    void display(){
        cout<<"\nName: "<<name<<"\nBalance: "<<balance<<"\n-------------"<<endl;
    }
};

int main (){
    Customer C1("Huzaifa", 1234);
    C1.display();
    Customer C2(C1);
    C2.display();
    
}