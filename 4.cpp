#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    if(a%4==0 && a%100!=0 || a%400==0 )
    {
        cout<<"It is a Leap year";
    }
    else
    {
        cout<<"It is not a Leap year";
    }
    return 0;
}