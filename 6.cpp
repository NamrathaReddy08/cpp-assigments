#include <iostream>
using namespace std;
class num
{
private:
    int n, i;

public:
    void get_number()
    {
        cout << "Enter the number:";
        cin >> n;
    }
    void display_info()
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "It is not a prime number";
                return;
            }
        }
        cout << "It is a prime number";
    }
};
int main()
{
    num p;
    p.get_number();
    p.display_info();
}