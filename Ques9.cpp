#include<iostream>
#include<string>
using namespace std;

int main()
{
    string num;
    cout<<"Enter the number:"<<endl;
    cin>>num;

    int s = 0;
    int e = num.length() - 1;

    bool palindrome = true;

    while(s<e){

        if(num[s] != num[e]){
            palindrome = false;
            break;
        }

        s++;
        e--;
    }

    if(palindrome){
        cout<<"number is palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
}