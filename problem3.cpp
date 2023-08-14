#include<iostream>
using namespace std;
class car
{
    int speed;
public:
    void car_speed(int s)
    {
        speed = s;
    }
    friend class driver;
};
class driver
{
    public:
    void his_driver(car a)
    {
        cout <<a.speed;
    }
};
int main()
{
    car o;
    o.car_speed(2000);
    driver ob;
    ob.his_driver(o);

}
