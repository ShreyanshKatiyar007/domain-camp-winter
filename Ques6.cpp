#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"enter the number:"<<endl;
    cin>>num;

    int reverse = 0;

    while(num!=0){

        int digit = num%10;
        reverse = (reverse*10) + digit;
        num /= 10;
    }

    cout<<"Reverse is:"<<reverse<<endl;
}