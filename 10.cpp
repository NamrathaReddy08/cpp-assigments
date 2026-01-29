#include<iostream>
using namespace std;
class palidrom
{
    private:
    int n;
    public:

    void get_data()
    {
        cout<<"Enter a number:";
        cin>>n;
    }

    void check()
    {
        int original=n,rev=0,remainder;
        while (original != 0) 
        {
           remainder = original % 10;
           rev = rev * 10 + remainder;
           original= original/ 10;
        }
        if(rev==n)
        {
            cout<<"The Number is Palidrom";
        }
        else
        {
            cout<<"The Number is not Palidrom";
        }
    }
};
int main()
{
    palidrom x;
    x.get_data();
    x.check();
}