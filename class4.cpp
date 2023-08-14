#include<iostream>
using namespace std;
class Time{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time()
 {
     hours=0;
     minutes=0;
     seconds=0;
 }
 Time(int h, int m, int s)
 {
     hours=h;
     minutes=m;
     seconds=s;
 }

  void getTime()
  {
      cin>>hours;
      cin>>minutes;
    cin>>seconds;


  }
  void displayTimeInseconds()
   {
       int TotalSecond= hours*3600+minutes*60+seconds;
   }


};
int main()
{
    Time t;
    t.getTime();
    t.displayTimeInseconds();
}
