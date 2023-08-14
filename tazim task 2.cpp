#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;
    double fahrenheit;

public:

    Temperature() : celsius(0), fahrenheit(0) {}
    Temperature(double c, double f) : celsius(c), fahrenheit(f) {}


    double getCelsius() const { return celsius; }
    void setCelsius(double c) { celsius = c; }


    double getFahrenheit() const { return fahrenheit; }
    void setFahrenheit(double f) { fahrenheit = f; }21qqq


    double convertCtoF() const { return celsius * 9/5 + 32; }


    double convertFtoC() const { return (fahrenheit - 32) * 5/9; }
};

int main() {
    Temperature temp1;
    Temperature temp2(36, 71);


    temp1.setCelsius(20);
    temp2.setFahrenheit(86);


    double fahrenheit1 = temp1.convertCtoF();
    double celsius2 = temp2.convertFtoC();


    cout << "Temperature 1 in Celsius: " << temp1.getCelsius() << "°C\n";
    cout << "Temperature 1 in Fahrenheit: " << fahrenheit1 << "°F\n";
    cout << "Temperature 2 in Fahrenheit: " << temp2.getFahrenheit() << "°F\n";
    cout << "Temperature 2 in Celsius: " << celsius2 << "°C\n";

    return 0;
}
