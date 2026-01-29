#include<iostream>
using namespace std;
int sumofnum(int a)
{
    if(a==0)
    {
        return 0;
    }
    return (a%10)+sumofnum(a/10);
}

int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"The Sum of number"<<a<<"is"<<"="<<sumofnum(a);
    return 0;
}