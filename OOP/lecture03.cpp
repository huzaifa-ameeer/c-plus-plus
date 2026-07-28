//static data member

#include<iostream>
using namespace std;

class Student {

    private:

    string name;
    int age;
    static int total;

    public:

    Student(string name, int age){
        this ->name = name;
        this ->age = age;
        total++;
    }

    void display(){
        cout<<"Name: "<<name<<" "<<"\nAge: "<<age<<"\n---------"<<endl;
    }

    void totalStudent(){
        cout<<"Total: "<<total<<endl;
    }


};

    int Student::total = 0;


int main (){
    Student s1("Huzaifa", 21);
    Student s2("Ali", 23);
    Student s3("Ahmad", 22);
    Student s4("Zubair", 21);
    Student s5("Shajar", 20);

    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();

    s5.totalStudent();
}