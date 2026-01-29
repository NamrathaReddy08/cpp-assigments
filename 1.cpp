#include<iostream>
using namespace std;
float areaoftriangle(float base,float height)
{
    return 0.5*base*height;
}
float areaofcircle(float radius)
{
    return 3.14*radius*radius;
}
int main()
{
    float b,h,r;
    cout<<"Enter the Base:";
    cin>>b;
    cout<<"Enter the Height:";
    cin>>h;
    cout<<"Enter the Radius:";
    cin>>r;
    

    cout<<"The Area of Triangle:"<<areaoftriangle(b,h)<<endl;
    cout<<"The Area of Circle:"<<areaofcircle(r)<<endl;
    return 0;
}