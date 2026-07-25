#include<iostream>
using namespace std;


//Normal Practice ->

// class Student{
// private:
//     string name, grade;
//     int age, roll_num;
// public:
//     void setDetails(string n, string g, int a, int r){
//         name= n;
//         grade=g;
//         age=a;
//         roll_num=r;
//     }
//     void getDetails()
//     {
//         cout<<name<<" "<<grade<<" "<<age<<" "<<roll_num<<endl;
//     }     
// };

// int main (){
//     Student s1;
//     Student s2;
//     s1.setDetails("Huzaifa", "A+", 21, 1882);
//     s2.setDetails("Zubair", "A+", 22, 1867);
//     s1.getDetails();
//     s2.getDetails();
//     return 0;
// }

//Size of classes and objects ->

// class Student {
//     public:
//     char a;
//     char b;
//     double c;
// };
// int main (){
//     Student a;
//     cout<<"Size is: "<<sizeof(a);
// }


//Dynamic memory allocation ->

class Student {
public: 
    string name, grade;
    int age, roll_number;
};
int main (){
    Student *s= new Student;
    (*s).name= "Huzaifa";
    (*s).age= 21;
    (*s).roll_number= 1882;
    (*s).grade= "A+";
    
    cout<<s->name<<" "<<s->age<<" "<<s->roll_number<<" "<<s->grade;
    return 0;
}