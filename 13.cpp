#include<iostream>
using namespace std;
class b
{
    public:
    string book_name,author;
    int copies;

    void get_data()
    {
        cout<<"Enter the book name:";
        cin>>book_name;
        cout<<"Enter the author name:";
        cin>>author;
        cout<<"Number of copies:";
        cin>>copies;
    }

    void display()
    {
        cout<<"Book Name:"<<book_name<<endl;
        cout<<"Author Name:"<<author<<endl;
        cout<<"Number of Copies:"<<copies<<endl;
    }

    void issue_book()
    {
        if(copies>0)
        {
            cout<<"Copy avaliable issuing book now"<<endl;
            copies--;
            cout<<"Remaining copies are:"<<copies<<endl;
        }
        else
        {
            cout<<"No Book avaliable";
        }
    }

};
int main()
{
    b books;
    books.get_data();
    books.display();
    books.issue_book();
    return 0;
}