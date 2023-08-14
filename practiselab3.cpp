#include <bits/stdc++.h>
using namespace std;
class Triangle{
public :
    int base , height ;
    float area;
    Triangle(int i , int j)
    {
        base = i;
        height = j;
    }

    Triangle (Triangle &o)
    {
        base = o.base;
        height = o.height;
    }
    float cal_area()
    {
        area = 0.5 * base * height;
        return area;
    }
};
int main()
{
    Triangle ob(2,3),ob1 = ob;
    cout << ob.cal_area()<<endl;
    cout << ob1.cal_area()<<endl;

}
