#include<iostream>
using namespace std;
class rectangle
{
    int length,width;
    public:
  rectangle(int l,int w)
  {
      length = l;
      width = w;
  }
  friend void calculateArea(rectangle ab);
  };
  void calculateArea(rectangle a)
  {
      cout<<a.length*a.width;
  }
  int main()
  {
      rectangle o(12,12);
      calculateArea(o);
  }
