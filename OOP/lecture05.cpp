// types of inheritance

// single level inheritance

#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    void work()
    {
        cout << "Human is working\n";
    }
};

class Student : public Human
{
private:
    int roll_number, fees;

public:
    Student(string name, int age, int roll_number, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_number = roll_number;
        this->fees = fees;
    }
    void display ()
    {
        cout<<"Name: "<<name<<"\nage: "<<age<<"\nRoll No: "<<roll_number<<"\nFees: "<<fees<<endl;
    }
};

int main ()
{
    Student s("Huzaifa", 21, 1882, 40000);
    s.display();
    s.work();
    return 0;
}