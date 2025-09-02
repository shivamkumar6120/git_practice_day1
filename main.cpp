#include<iostream>
using namespace std;
int main()
{
    cout<<"Calculator App";
    int num1,num2,res,choice;
    cout<<"Enter two numbers : "<<endl;
    cin>>num1>>num2;
    cout<<"Enter choice : "<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1: res = num1+num2; 
        break;
        default: cout<<"Invalid choice"<<endl;
    }
    return 0;
}