#include <iostream>
using namespace std;
class ClassB;

class ClassA {
 public:
        ClassA()
        {
            num1 =12;

        }

    private:
        int num1;

        friend int multiply(ClassA, ClassB);
};
class ClassB {
public:
        ClassB()
        {
            num2 = 2;
        }
    private:
        int num2;
        friend int multiply(ClassA, ClassB);
};
int multiply(ClassA object1, ClassB object2)
{
    return (object1.num1 * object2.num2);
}

int main() {
    ClassA object1;
    ClassB object2;
    cout << "Result after multiplication of two numbers is : " << multiply(object1, object2);
    return 0;
}
