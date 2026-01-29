#include<iostream>
using namespace std;
class x
{
    private:
    int n,i;
    public:
    void get_data()
    {
        cout<<"Enter the number:";
        cin>>n;
    }
    void data()
    {
        cout << "Numbers from 1 to " << n << " are:" << endl;
        for(int i=1;i<=n;i++)
        {
            cout<<i<<endl;
        }
    }
};
int main()
{
    x s;
    s.get_data();
    s.data();
}