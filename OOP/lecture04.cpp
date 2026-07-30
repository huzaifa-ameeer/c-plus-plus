// inheritance

// private, public, protected
#include <iostream>
using namespace std;

class Human
{
private:
    int a;

protected:
    int c;

public:
    int b;
    void fun()
    {
        a = 2, b = 4, c = 5;
        cout << a << " " << b << " " << c;
    }
};

int main()
{
    Human Huzaifa;
    Huzaifa.b;
    Huzaifa.fun();
}