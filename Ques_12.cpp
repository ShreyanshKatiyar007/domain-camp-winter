#include<iostream>
using namespace std;

class Info
{
private:
    int employee_id;
    string employee_name; 
    float employee_salary;

public:
    // Getter functions
    int getid() {
        return employee_id;
    }

    string getname() {
        return employee_name;
    }

    float getsalary() {
        return employee_salary;
    }

    // Setter functions
    void setid(int id) { 
        employee_id = id;
    }

    void setname(string name) {  
        employee_name = name;
    }

    void setsalary(float salary) {
        employee_salary = salary;
    }
};

int main()
{
    Info e1;
    e1.setid(1127);
    e1.setname("John");
    e1.setsalary(75000);

    cout << "Employee id: " << e1.getid() << endl;  
    cout << "Employee name: " << e1.getname() << endl;
    cout << "Employee salary: " << e1.getsalary() << endl;

    return 0;
}
