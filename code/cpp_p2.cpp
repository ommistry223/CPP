#include <iostream>
using namespace std;

class Inventory {
private:
    static const int MAX_PRODUCTS = 100;
    struct Product 
    {
        int id;
        string name;
        int quantity;
        double price;                                       
    };
    Product products[MAX_PRODUCTS];
    int productCount = 0;

public:
    void addProduct(int productID,string name,int quantity,double price) {
        for (int i = 0; i < productCount; i++) {
            if (products[i].id == productID) {
                cout <<"Product ID already exists. Use updateQuantity to modify stock." << endl;
                return;
            }
        }
        if (productCount < MAX_PRODUCTS) {
            products[productCount++] = {productID, name, quantity, price};
            cout <<"Product "<<name<<" added successfully."<< endl;
        } else {
            cout <<"Inventory full. Cannot add more products."<< endl;
        }
    }

    void updateQuantity(int productID, int quantity) {
        for (int i = 0; i < productCount; i++) {
            if (products[i].id == productID) {
                products[i].quantity += quantity;
                cout <<"Updated quantity for "<<products[i].name<<" to "<<products[i].quantity<<"."<<endl;
                return;
            }
        }
        cout<<"Product ID not found."<<endl;
    }

    double calculateTotalValue() {
        double totalValue = 0;
        for (int i = 0; i < productCount; i++) {
            totalValue += products[i].quantity * products[i].price;
        }
        return totalValue;
    }

    void displayInventory() {
        cout << "\nCurrent Inventory:" << endl;
        for (int i = 0; i < productCount; i++) {
            cout <<"ID: "<<products[i].id<<", Name: "<<products[i].name << ", Quantity: "<< products[i].quantity<<", Price: "<< products[i].price<<endl;
        }
        cout <<"Total Inventory Value: "<< calculateTotalValue()<<endl;
    }
};

int main() {
    Inventory storeInventory;
    storeInventory.addProduct(101, "Laptop", 10, 800);
    storeInventory.addProduct(102, "Phone", 15, 500);
    storeInventory.updateQuantity(101, 5);
    storeInventory.displayInventory();
    return 0;
}
