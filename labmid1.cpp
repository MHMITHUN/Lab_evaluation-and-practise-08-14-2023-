#include<iostream>
using namespace std;
class building
{
    double height;
    int floor;
    double price;
public:
    building(double x,int y,double z)
    {
        height=x;
        floor=y;
        price=z;
    }
    building()
    {
        height=0;
        floor=0;
        price=0;
    }
    void display()
    {
        cout<<"height:"<<height<<endl;
        cout<<"floor:"<<floor<<endl;
        cout<<"price:"<<price<<endl;
    }
friend double compare(building ob);
};
double compare(building ob)
{
    double height;
    int floor;
    double price;
    if(ob.height>ob.floor)
        return height;
    else if(ob.price>ob.floor)
    return price;
    else floor;

}
int main()
{
    building ob1(5.8,3,3000);
    building ob2(6.8,4,40000);
    compare(ob1);
    ob1.display();
    return 0;
}
