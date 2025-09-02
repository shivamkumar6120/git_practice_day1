#include<iostream>
using namespace std;
int main()
{
    cout<<"Calculator App";
    int num1,num2,res,choice;
    cout<<"Enter two numbers : "<<endl;
    cin>>num1>>num2;

    cout<<"1. Add \nEnter choice : "<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1: res = num1+num2; 
                cout<<"RESULT = "<<res<<endl;
        break;
        case 2: res = num1 - num2; 
                cout<<"RESULT = "<<res<<endl;
        break;

        case 3: res = num1 * num2; 
                cout<<"RESULT = "<<res<<endl;
        break;
        case 4: res = num1 / num2; 
                cout<<"RESULT = "<<res<<endl;
        break;
        default: cout<<"Invalid choice"<<endl;
    }
    return 0;
}