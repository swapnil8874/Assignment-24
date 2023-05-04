//Write a C++ program to add all the numbers of an array of size 10
#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,sum=0 ;
    cout<<"Enter The numbers you want to enter\n";
    cin>>n;
    cout<<"Enter The numbers\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"The Addition of all numbers is:"<<sum;
   

}