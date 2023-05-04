//Write a C++ program to calculate the volume of a cuboid
#include<iostream>
using namespace std;
int main()
{
    float l,w,h;
    cout<<"Enter The Length,Width and Height of the Cuboid\n";
    cin>>l>>w>>h;
    float vol = l*w*h;
    cout<<"The volume of a cuboid is:"<<vol;
}