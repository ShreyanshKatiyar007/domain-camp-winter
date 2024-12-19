#include <iostream>
using namespace std;

class A
{

public:
    void intern(float stippend)
    {
        cout << "intern stippend is: " << stippend <<endl;
    }

    void Employee(float salary, float bonus)
    {
        cout << "Emplyee income: " << salary + bonus << endl;
    }

    void Manager(float salary, float bonus, float incentive)
    {
        cout << "Manager income: " << salary + bonus + incentive << endl;
    }
};

int main()
{

    A obj;
    obj.intern(25000);
    obj.Employee(50000,15500);
    obj.Manager(75000,17000,3000);
}