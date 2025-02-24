#include <iostream>
using namespace std;

class InventoryItem {
private:
    int item_id;
    char name[50];
    double price;
    int quantity;

public:
    InventoryItem() {
        item_id = 0;
        for (int i = 0; i < 8; i++) {
            name[i] = "Default"[i];
        }
        price = 0.0;
        quantity = 0;
    }

    InventoryItem(int id, const char* item_name, double item_price, int item_quantity) {
        item_id = id;
        int i;
        for (i = 0; item_name[i] != '\0' && i < 49; i++) {
            name[i] = item_name[i];
        }
                  name[i] = '\0';
        price = item_price;
        quantity = item_quantity;
    }

    void add_stock(int amount) {
        if (amount > 0) {
            quantity += amount;
        }
    }

    bool sell_item(int amount) {
        if (amount > 0 && amount <= quantity) {
            quantity -= amount;
            return true;
        } else {
            cout << "Insufficient stock for item: " << name << endl;
            return false;
        }
    }

    void display_details() {
        cout << "Item ID: " << item_id << endl;
        cout << "Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity Available: " << quantity << endl;
        cout <<  endl;
    }
};

int main() {
    InventoryItem items[] = {
        InventoryItem(),  // Default item
        InventoryItem(101, "Laptop", 899.99, 10),
        InventoryItem(102, "Smartphone", 499.99, 15),
        InventoryItem(103, "Headphones", 79.99, 25)
    };

    for (int i = 0; i < 4; i++) {
        items[i].display_details();
    }

    items[1].add_stock(5);
    items[2].sell_item(3);
    items[3].sell_item(30); 

    cout << "Updated Inventory Details:" << endl;
    for (int i = 0; i < 4; i++) {
        items[i].display_details();
    }

    return 0;
}
