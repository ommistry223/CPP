#include <iostream>
#include <map>
#include <string>
using namespace std;

// Struct to hold both quantity and price for each item
struct ItemInfo {
    int quantity;
    float price;
};

int main() {
    map<string, ItemInfo> inventory;
    
    cout << "--------------------------" << endl;
    cout << "Welcome to my inventory system" << endl;
    cout << "--------------------------" << endl;

    int choice;
    string item;
    
    do {
        cout << "\n1. Add item" << endl;
        cout << "2. Remove item" << endl;
        cout << "3. View items" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                ItemInfo info;
                cout << "Enter the item name: ";
                cin >> item;
                cout << "Enter the item quantity: ";
                cin >> info.quantity;
                cout << "Enter the item price: ";
                cin >> info.price;
                inventory[item] = info;
                cout << item << " added successfully!" << endl;
                break;
            }
            case 2: {
                if(inventory.empty()) {
                    cout << "Inventory is empty!" << endl;
                } else {
                    cout << "Enter the item name to remove: ";
                    cin >> item;
                    if(inventory.erase(item)) {
                        cout << item << " removed successfully" << endl;
                    } else {
                        cout << "Item not found" << endl;
                    }
                }
                break;
            }
            case 3: {
                if(inventory.empty()) {
                    cout << "Inventory is empty!" << endl;
                } else {
                    cout << "\nCurrent Inventory:" << endl;
                    cout << "---------------------------------" << endl;
                    cout << "Item\t\tQuantity\tPrice" << endl;
                    cout << "---------------------------------" << endl;
                    for(const auto& entry : inventory) {
                        cout << entry.first << "\t\t" 
                             << entry.second.quantity << "\t\t" 
                             << entry.second.price << endl;
                    }
                    cout << "---------------------------------" << endl;
                }
                break;
            }
            case 4: {
                cout << "Exiting the program" << endl;
                break;
            }
            default: {
                cout << "Invalid choice, please try again" << endl;
                break;
            }
        }
    } while(choice != 4);
    
    return 0;
}