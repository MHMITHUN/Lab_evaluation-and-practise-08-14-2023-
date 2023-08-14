#include<iostream>
using namespace std;

class Reverse{
private:
     int number;
 public:
    void getInput()
    {
        cin>>number;

    }
 int doReverse()
{
    int reversed= 0;
    int temp=number;
     while(temp!=0)
     {
         int digit = temp%10;
         reversed*10+digit;
         temp/=10;

     }
     return reversed;

     }
};
  int  main()
  {
      Reverse rev;
      rev.getInput();
      int reversedNumber =rev.doReverse();
     cout<<reversedNumber<<endl;

     return 0;
  }


