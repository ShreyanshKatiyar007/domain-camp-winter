#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"enter the positive number:"<<endl;
    cin>>num;

    int sum = 0;

    while(num!=0){

        int digit = num%10;
        sum = sum + digit;
        num /= 10;
    }
    cout<<"Sum is:"<<sum;

}