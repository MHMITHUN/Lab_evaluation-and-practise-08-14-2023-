#include <bits/stdc++.h>
using namespace std;
class Time
{
private:
    int hours,minutes,seconds;

public:
    void getTime(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;

    cout << "Hours: ";
    cin >> h;
    cout << "Minutes: ";
    cin >> m;
    cout << "Seconds: ";
    cin >> s;

    }

    void displayTimeInSeconds()
    {
        int totalSeconds = hours * 3600 + minutes * 60 + seconds;
        cout << "Total seconds: " << totalSeconds <<endl;
    }
};

int main()
{

    Time myTime;
    int h, m, s;

    cout << "Enter hours: ";
    cin >> h;
    cout << "Enter minutes: ";
    cin >> m;
    cout << "Enter seconds: ";
    cin >> s;

    myTime.getTime(h, m, s);
    myTime.displayTimeInSeconds();

    return 0;
}
