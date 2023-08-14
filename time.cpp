#include<iostream>
using namespace std;
class time_zone{
int h,m,s;
public:
time_zone(int h, int m, int s)
    {
        this->h=h;
        this->m=m;
        this->s=s;
        }
        time_zone(){}
        time_zone func(time_zone ob1,time_zone ob2)
        {
        time_zone ob3;
        ob3.h=ob1.h-ob2.h;
        ob3.m=ob1.m-ob2.m;
        ob3.s=ob1.s-ob2.s;
        return ob3;
        }
        time_zone func1(time_zone ob1,time_zone ob2)
        {
        time_zone ob4;
        ob4.h=ob1.h+ob2.h;
        ob4.m=ob1.m+ob2.m;
        ob4.s=ob1.s+ob2.s;
        return ob4;
        }
        time_zone func2(time_zone ob1,time_zone ob2)
        {
        time_zone ob5;
        ob5.h=ob1.h*ob2.h;
        ob5.m=ob1.m*ob2.m;
        ob5.s=ob1.s*ob2.s;
        return ob5;}
        time_zone func3(time_zone ob1,time_zone ob2){

        time_zone ob6;
        ob6.h=ob1.h/ob2.h;
        ob6.m=ob1.m/ob2.m;
        ob6.s=ob1.s/ob2.s;
        return ob6;}
        time_zone display(){
        cout<<h<<":"<<m<<":"<<s<<endl;}
};
int main(){
 time_zone ob1(10,5,4),ob2(2,7,8),ob7,ob8,ob9,ob10;
 time_zone ob11;
 ob7=ob7.func(ob1,ob2);
 ob7.display();
 ob8=ob8.func1(ob1,ob2);
 ob8.display();
 ob9=ob9.func2(ob1,ob2);
 ob9.display();
 ob10=ob10.func3(ob1,ob2);
 ob10.show();
}
