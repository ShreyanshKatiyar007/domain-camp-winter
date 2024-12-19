#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"enter the positive number:"<<endl;
    cin>>num;

    int max = 0;

    while(num!=0){

        int digit = num%10;
        if(digit>max){
            max = digit;
        }
        num /= 10;
    }
    cout<<"Largest digit is:"<<max;

}