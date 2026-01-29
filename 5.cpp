#include <iostream>
using namespace std;
class info
{
public:
    string Name;
    string Enrollment_Number;
    int Roll_Number;

public:
    void get_data()
    {
        cout << "Enter the Name:";
        cin >> Name;
        cout << "Enter the Enrollment_Number:";
        cin >> Enrollment_Number;
        cout << "Enter the Roll_Number";
        cin >> Roll_Number;
    }
    void show_info()
    {
        cout << Name << endl
             << Enrollment_Number << endl
             << Roll_Number << endl;
    }
};
int main()
{
    info Student[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Student details" << i + 1 << endl;
        Student[i].get_data();
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Student details" << i + 1 << endl;
        Student[i].show_info();
    }
    return 0;
}
