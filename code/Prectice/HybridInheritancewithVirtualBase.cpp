#include <iostream>
using namespace std;

class Hospital {
protected:
    int rollno;
    string name;
public:
    void getHospital() {
        cout << "Enter rollno and name: ";
        cin >> rollno >> name;
    }
    void putHospital() {
        cout << "RollNo: " << rollno << "\nName: " << name << endl;
    }
};

class Ward : virtual public Hospital {
protected:
    int ward_no;
public:
    void getWard() {
        cout << "Enter ward no: ";
        cin >> ward_no;
    }
    void putWard() {
        cout << "Ward No: " << ward_no << endl;
    }
};

class Room : virtual public Hospital {
protected:
    int bed_no;
    string illness;
public:
    void getRoom() {
        cout << "Enter bed no and illness: ";
        cin >> bed_no >> illness;
    }
    void putRoom() {
        cout << "Bed No: " << bed_no << "\nIllness: " << illness << endl;
    }
};

class Patient : public Ward, public Room {
public:
    void display() {
        putHospital(); // No ambiguity due to virtual base
        putWard();
        putRoom();
    }
};

int main() {
    Patient p;
    p.getHospital();
    p.getWard();
    p.getRoom();
    p.display();
    return 0;
}