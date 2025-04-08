#include <iostream>
using namespace std;

class Medicine {
protected:
    string type, company, mfg_date;
public:
    void getCommon() {
        cout << "Enter type, company, mfg date: ";
        cin >> type >> company >> mfg_date;
    }
    void putCommon() {
        cout << "Type: " << type << "\nCompany: " << company 
             << "\nMFG Date: " << mfg_date << endl;
    }
};

class Tablet : public Medicine {
private:
    string name;
    int quantity;
    float price;
public:
    void getTablet() {
        getCommon();
        cout << "Enter tablet name, quantity, price: ";
        cin >> name >> quantity >> price;
    }
    void putTablet() {
        putCommon();
        cout << "Tablet: " << name << "\nQty: " << quantity 
             << "\nPrice: $" << price << endl;
    }
};

class Syrup : public Medicine {
private:
    int quantity_ml;
    string dosage;
public:
    void getSyrup() {
        getCommon();
        cout << "Enter quantity (ml), dosage: ";
        cin >> quantity_ml >> dosage;
    }
    void putSyrup() {
        putCommon();
        cout << "Quantity: " << quantity_ml << "ml\nDosage: " << dosage << endl;
    }
};

int main() {
    Tablet t;
    Syrup s;
    t.getTablet(); 
    s.getSyrup();
    t.putTablet();
    s.putSyrup();
    return 0;
}