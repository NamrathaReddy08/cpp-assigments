#include<iostream>
using namespace std;
class elec
{
    private:
    int amount,discount,finalbill;
    public:
    void get_data()
    {
        cout<<"Enter the Amount:";
        cin>>amount;
    }
    void calculation()
    {
        discount=0.02*amount;
        finalbill=amount-discount;
    }
    void display()
    {
        cout<<"The amount you entered is:"<<amount<<endl;
        cout<<"The Discount is:"<<discount<<endl;
        cout<<"The Final amount is:"<<finalbill<<endl;
    }
};
int main()
{
    elec s;
    s.get_data();
    s.calculation();
    s.display();
}