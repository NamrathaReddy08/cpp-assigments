#include<iostream>
using namespace std;
class leap
{
    private:
    int a;
    public:
    void get_data()
    {
        cout<<"Enter the number you want to check:";
        cin>>a;
    }
    void calculation()
    {
        if(a%4==0 && a%100!=0 || a%400==0 )
        {
            cout<<"It is a Leap year";
        }
        else
        {
            cout<<"It is not a Leap year";
        }
    }
};
int main()
{
    leap s;
    s.get_data();
    s.calculation();
    return 0;
}