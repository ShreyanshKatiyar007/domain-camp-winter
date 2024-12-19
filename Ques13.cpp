#include<iostream>
using namespace std;

class Student
{
    public:
    int rollno;
    string name;
};
class result : public Student{

    public:
        float DAA = 40;
        float SE = 45;
        float CS = 45;

        float sum = DAA + SE + CS;

        float percentage  = (sum/180) * 100;
};

int main(){

    result r1;
    Student s1;
    cout<<"sum of marks is: "<<r1.sum <<endl;
    cout<<"percentage is: "<<r1.percentage <<endl;
}