#include<iostream>
using namespace std;
class Employee
{
    int salary ;
    public:
    void income(int s)
    {
        salary = s;

    }
      friend class HRDeparment;

};
class HRDeparment
{
public:

void his_salary(Employee o)
{
    cout<<"salary ="<<o.salary;
}
};
int main()
{
    Employee ob;
    ob.income(1000);
    HRDeparment obj;
    obj.his_salary(ob);
}
