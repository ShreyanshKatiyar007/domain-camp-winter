#include <iostream>
using namespace std;

class A
{

public:
    void Hello()
    {
        cout << "hello everyone" << endl;
    }

    void Hello(string name)
    {
        cout << "hello " << name << endl;
    }
};

int main()
{

    A obj;
    obj.Hello("shreyansh");
}