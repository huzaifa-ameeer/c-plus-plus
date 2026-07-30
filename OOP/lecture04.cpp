// inheritance

// private, public, protected
// #include <iostream>
// using namespace std;

// class Human
// {
// private:
//     int a;

// protected:
//     int c;

// public:
//     int b;
//     void fun()
//     {
//         a = 2, b = 4, c = 5;
//         cout << a << " " << b << " " << c;
//     }
// };

// int main()
// {
//     Human Huzaifa;
//     Huzaifa.b;
//     Huzaifa.fun();
// }



//parent and child class

// #include<iostream>
// using namespace std;

// class Human{

//     public:
//     string name;
//     int age;

// };

// class Student : private Human{

//     private:
//     int marks;

// };

// int main (){
//     Student A;
//     A.name = "Huzaifa";
// }


#include<iostream>

using namespace std;

class Human
{
    protected:
    string name;
    int age;  
};

class Student : protected Human 
{
    private: 
    float marks;
    public:
    void addInfo(string name, int age, float marks)
    {
        this ->name = name;
        this ->age = age;
        this ->marks = marks;
    }
    void display()
    {
        cout<<name<<" "<<age<<" "<<marks<<endl; 
    }
};

int main (){
    Student s1;
    s1.addInfo("Huzaifa", 21, 3.38);
    s1.display();
    return 0;
}