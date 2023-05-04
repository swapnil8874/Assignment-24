//Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    float a,w,b;
    cout<<"Enter The Three Numbers\n\n";
    cin>>a>>w>>b;
    float avg = (a+w+b)/3;
    cout<<"The volume of a cuboid is:"<<avg;
}