

#include <iostream>
#include <string>
using namespace std;
class Product {
private:
    string name;
    double price;
    int quantity;

public:

    Product() : name(""), price(0.0), quantity(0) {}
    Product(string n, double p, int q) : name(n), price(p), quantity(q) {}


    string getName() const { return name; }
    void setName(string n) { name = n; }

    double getPrice() const { return price; }
    void setPrice(double p) { price = p; }

    int getQuantity() const { return quantity; }
    void setQuantity(int q) { quantity = q; }


    double calculateTotalCost() const { return price * quantity; }
};

int main() {
    Product product1;
    product1.setName("Item 1");
    product1.setPrice(10.0);
    product1.setQuantity(3);

    Product product2("Item 2", 15.0, 2);

    double totalCost1 = product1.calculateTotalCost();
    double totalCost2 = product2.calculateTotalCost();

    cout << product1.getName() << " - Total Cost: $" << totalCost1 << endl;
    cout << product2.getName() << " - Total Cost: $" << totalCost2 << endl;

    return 0;
}






