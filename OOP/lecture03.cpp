// static data member

// #include <iostream>
// using namespace std;

// class Student
// {

// private:
//     string name;
//     int age;
//     static int total;

// public:
//     Student(string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//         total++;
//     }

//     void display()
//     {
//         cout << "Name: " << name << " " << "\nAge: " << age << "\n---------" << endl;
//     }

//     void totalStudent()
//     {
//         cout << "Total: " << total << endl;
//     }
// };

// int Student::total = 0;

// int main()
// {
//     Student s1("Huzaifa", 21);
//     Student s2("Ali", 23);
//     Student s3("Ahmad", 22);
//     Student s4("Zubair", 21);
//     Student s5("Shajar", 20);

//     s1.display();
//     s2.display();
//     s3.display();
//     s4.display();
//     s5.display();

//     s5.totalStudent();
// }


//static member function

// #include<iostream>
// using namespace std;

// class Customer {
// private:
//     string name;
//     int balance;
//     static int total_customers;
//     static int total_balance;
// public:
//     Customer(string name, int balance)
//     {
//         this->name = name;
//         this->balance = balance;
//         total_customers++;
//         total_balance+=balance;
//     }
//     void display(){
//         cout<<"Name: "<<name<<endl<<"Balance: "<<balance<<"\n------------"<<endl;
//     }
//     static void accessStatic (){
//         cout<<"Total Customer: "<<total_customers<<endl;
//         cout<<"Total Balance: "<<total_balance<<"\n"<<endl;

//     }
// };

// int Customer::total_customers = 0;
// int Customer::total_balance = 0;

// int main (){
//     Customer c1("Huzaifa", 1000);
//     Customer c2("Ghufran", 3000);
//     Customer c3("Hassan", 2000);

//     c1.display();
//     c2.display();
//     c3.display();

//     Customer::accessStatic();

//     return 0;
// }


//encapsulation

#include<iostream>
using namespace std;

class Bank {
private:
    int balance;
public:
    Bank(int bal){
        balance = bal;
    }    
    void deposit (){
        if(balance>0){
            balance += balance; 
        }
        else{
            cout<<"Invalid amount";
        }
    }
};

int main (){
    Bank b(100);
    b.deposit();
}