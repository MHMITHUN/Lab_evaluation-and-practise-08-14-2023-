#include<iostream>
using namespace std;
class Registration
{
public:
    string coursenum1,coursenum2,coursenum3;
    void chooseCourse(string x,string y,string z)
    {
        coursenum1=x;
        coursenum2=y;
        coursenum3=z;
}
void display()
{
    cout<<coursenum1<<" "<<endl;
    cout<<coursenum2<<" "<<endl;
    cout<<coursenum3<<" "<<endl;
}
void setinfo()
{
    cin>>coursenum1;
    cin>>coursenum2;
    cin>>coursenum3;
}

};


int main()
{
    Registration ob;
    ob.setinfo();
    ob.display();
    return 0;
}
