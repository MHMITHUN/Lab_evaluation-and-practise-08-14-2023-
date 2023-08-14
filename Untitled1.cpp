#include<iostream>
using namespace std;
class vehicle {
private:
    int speed;
    int year;
    string model;
    public:
    void getvalue()
    {
        cout<<"Enter speed:";
        cin>>speed;
        cout<<"Enter year:";
        cin>>year;
        cin.ignore();
        cout<<"Enter model:";
        getline(cin,model);

    }
    void setvalue(int s,int y,string m){
        speed = s;
        year = y;
        model = m;
    }
    void printvalue(){
    cout<< "speed:" << speed <<endl;
    cout<< "year:" << year <<endl;
    cout<< "model:" << model <<endl;

    }
};
    int main()
    {
        vehicle car;

    car.getvalue();

    car.printvalue();

     vehicle bike;
     bike.setvalue(48,2022,"Mountain bike");
     bike.printvalue();



    return 0;

    }


