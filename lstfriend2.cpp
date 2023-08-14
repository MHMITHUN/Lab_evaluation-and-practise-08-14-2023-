#include <iostream>
using namespace std;
class Reverse {
private:
    int num;
public:
    void getInput() {
        cout << "Enter an integer: ";
        cin >> num;
    }

    void doReverse() {
        int reversedNum = 0;
        int originalNum = num;

        while (num != 0) {
            int digit = num % 10;
            reversedNum = reversedNum * 10 + digit;
            num /= 10;
        }

        cout << "Original number: " << originalNum << endl;
        cout << "Reversed number: " << reversedNum << endl;
    }
};

int main() {
    Reverse reverseObj;
    reverseObj.getInput();
    reverseObj.doReverse();

    return 0;
}
