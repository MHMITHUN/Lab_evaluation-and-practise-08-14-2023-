#include<iostream>
using namespace std;
class example
{
    int A;
    example(int value){
    A= value};
    public:
    int compare(int n1,int n2,int n3)
    {
        num1=n1;
        num2=n2;
        num3=n3;
        if(num1>num2 && num1>num3)
        {
            return num1;
        }
        else if(num2>num1 && num2>num3)
        {
            return num2;
        }
        else
            return num3;
    }
};
 int main()
 {
    example ob1 ob2;
     ob2 = ob1.compare(10,20,30);
     cout<<ob2;


 }
