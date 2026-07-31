// // // // types of inheritance

// // // // single level inheritance

// // // // #include <iostream>
// // // // using namespace std;

// // // // class Human
// // // // {
// // // // protected:
// // // //     string name;
// // // //     int age;

// // // // public:
// // // //     void work()
// // // //     {
// // // //         cout << "Human is working\n";
// // // //     }
// // // //     void display()
// // // //     {
// // // //         cout<<name<<" "<<age<<endl;
// // // //     }
// // // // };

// // // // class Student : public Human
// // // // {
// // // // private:
// // // //     int roll_number, fees;

// // // // public:
// // // //     Student(string name, int age, int roll_number, int fees)
// // // //     {
// // // //         this->name = name;
// // // //         this->age = age;
// // // //         this->roll_number = roll_number;
// // // //         this->fees = fees;
// // // //     }
// // // //     // void display ()
// // // //     // {
// // // //     //     cout<<"Name: "<<name<<"\nage: "<<age<<"\nRoll No: "<<roll_number<<"\nFees: "<<fees<<endl;
// // // //     // }
// // // // };

// // // // int main ()
// // // // {
// // // //     Student s("Huzaifa", 21, 1882, 40000);
// // // //     s.display();
// // // //     // s.work();
// // // //     return 0;
// // // // }


// // // //multilevel inheritance

// // // #include<iostream>
// // // using namespace std;

// // // class Person 
// // // {
// // //     protected:
// // //     string name;
// // //     public:
// // //     void introduce()
// // //     {
// // //         cout<<"My name is: "<<name<<endl;
// // //     }
// // // };

// // // class Employee : public Person
// // // {
// // //     protected:
// // //     int salary;
// // //     public:
// // //     void Salary()
// // //     {
// // //         cout<<"My salary is: "<<salary<<endl;
// // //     }
// // // };

// // // class Manager : public Employee
// // // {
// // //     protected: 
// // //     string department;
// // //     public:
// // //     Manager(string name, int salary, string department)
// // //     {
// // //         this ->name = name;
// // //         this ->salary = salary;
// // //         this ->department = department;
// // //     }
// // //     void display ()
// // //     {
// // //         cout<<"Name: "<<name<<endl;
// // //         cout<<"Salary: "<<salary<<endl;
// // //         cout<<"Department: "<<department<<endl;
// // //     }
// // // };

// // // int main ()
// // // {
// // //     Manager a("Huzaifa", 70000, "SE");
// // //     a.display();
// // //     a.introduce();
// // //     a.Salary();
// // //     // a.name = "Ghufran"; //cant access it bcz of protected access modifier
// // // }


// // //multiple inheritance

// // #include<iostream>
// // using namespace std;

// // class Person 
// // {
// //     protected:
// //     string name;
// //     public:
// //     void introduce ()
// //     {
// //         cout<<"Name: "<<name<<endl;
// //     }
// // };

// // class Student
// // {
// //     protected:
// //     string degree;
// //     public:
// //     void Subject () {
// //         cout<<"Degree: "<<degree<<endl;
// //     }   
// // };

// // class Fees : public Person, Student
// // {
// //     protected:
// //     int fees;
// //     public:
// //     Fees(string name, string degree, int fees)
// //     {
// //         this -> name = name;
// //         this -> degree = degree;
// //         this -> fees = fees;
// //     }
// //     void FeesStructure ()
// //     {
// //         cout<<"Fees: "<<fees<<endl;
// //     }
// //     void display ()
// //     {
// //         introduce();
// //         Subject();
// //         FeesStructure();
// //     }
// // };

// // int main ()
// // {
// //     Fees f("Huzaifa", "CS", 50000);
// //     f.display();
// // }



// //hierarchical inheritance

// #include<iostream>
// using namespace std;

// class Human {
//     protected:
//     string name;
//     int age;
//     public:
//     Human (){}
// };

// class Student : public Human
// {
//     protected:
//     int marks;
//     public:
//     Student(string name, int age, int marks)
//     {
//         this -> name = name;
//         this -> age = age;
//         this -> marks = marks;
//     }
//     void display()
//     {
//         cout<<name<<" "<<age<<" "<<marks<<endl;
//     }
// };

// class Teacher : public Human
// {
//     protected:
//     int subject;
//     public:
//     Teacher(string name, int age, int subject)
//     {
//         this -> name = name;
//         this -> age = age;
//         this -> subject = subject;
//     }
//     void display()
//     {
//         cout<<name<<" "<<age<<" "<<subject<<endl;
//     }
// };

// int main ()
// {
//    Student s("Huzaifa", 21, 1012); 
//    Teacher t("Ameer", 29, 1016); 
//    s.display();
//    t.display();
// }



#include<iostream>
using namespace std;

class Student 
{
    public:
    void stdPrint()
    {
        cout<<"I am a Student\n";
    }
};

class Male {
    public:
    void malePrint()
    {
        cout<<"I am Male\n";
    }
};

class Female
{
    public:
    void femalePrint()
    {
        cout<<"I am Female\n";
    }
};

class Boy : public Student, public Male
{
    public:
    void boyPrint()
    {
        cout<<"I am a Boy\n";
    }
};

class Girl : public Student, public Female
{
    public:
    void girlPrint()
    {
        cout<<"I am a Girl\n";
    }
};


int main ()
{
    Boy b;
    b.boyPrint();
    b.stdPrint();
    b.malePrint();
    Girl g;
    g.girlPrint();
    g.stdPrint();
    g.femalePrint();

}