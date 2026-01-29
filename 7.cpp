#include <iostream>
using namespace std;
class num
{
    private:
    int a,b;
    public:
    void get_data()
    {
        cout<<"Enter the 1st number:";
        cin>>a;
        cout<<"Enter the 2nd number:";
        cin>>b;
    }
    void swap_numbers()
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    void display() {
        cout << "After swapping:" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
int main()
{
    num s;
    s.get_data();
    s.swap_numbers();
    s.display();
    return 0;
}