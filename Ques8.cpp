//Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int a,t;
    cout<<"Enter the Value of a and b\n";
    cin>>a>>t;
    a=a*t;
    t=a/t;
    a=a/t;
    cout<<" Number After Swapping is " << a <<" and " <<t;

}