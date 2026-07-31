// types of inheritance

// single level inheritance

// #include <iostream>
// using namespace std;

// class Human
// {
// protected:
//     string name;
//     int age;

// public:
//     void work()
//     {
//         cout << "Human is working\n";
//     }
//     void display()
//     {
//         cout<<name<<" "<<age<<endl;
//     }
// };

// class Student : public Human
// {
// private:
//     int roll_number, fees;

// public:
//     Student(string name, int age, int roll_number, int fees)
//     {
//         this->name = name;
//         this->age = age;
//         this->roll_number = roll_number;
//         this->fees = fees;
//     }
//     // void display ()
//     // {
//     //     cout<<"Name: "<<name<<"\nage: "<<age<<"\nRoll No: "<<roll_number<<"\nFees: "<<fees<<endl;
//     // }
// };

// int main ()
// {
//     Student s("Huzaifa", 21, 1882, 40000);
//     s.display();
//     // s.work();
//     return 0;
// }


//multilevel inheritance

#include<iostream>
using namespace std;

class Person 
{
    protected:
    string name;
    public:
    void introduce()
    {
        cout<<"My name is: "<<name<<endl;
    }
};

class Employee : public Person
{
    protected:
    int salary;
    public:
    void Salary()
    {
        cout<<"My salary is: "<<salary<<endl;
    }
};

class Manager : public Employee
{
    protected: 
    string department;
    public:
    Manager(string name, int salary, string department)
    {
        this ->name = name;
        this ->salary = salary;
        this ->department = department;
    }
    void display ()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Department: "<<department<<endl;
    }
};

int main ()
{
    Manager a("Huzaifa", 70000, "SE");
    a.display();
    a.introduce();
    a.Salary();
    // a.name = "Ghufran"; //cant access it bcz of protected access modifier
}