#include <iostream>
#include <limits>
#include <string>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    string category;
    string brand;
    double price;

public:
    void getdata() {
        cout << "Enter Product ID: ";
        cin >> productID;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Category: ";
        getline(cin, category);

        cout << "Enter Brand: ";
        getline(cin, brand);

        cout << "Enter Price: ";
        cin >> price;
    }

    void putdata() const {
        cout << "\nProduct Details:" << endl;
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Category: " << category << endl;
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Product p;

    p.getdata();
    p.putdata();

    return 0;
}