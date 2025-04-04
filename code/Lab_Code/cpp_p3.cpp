#include <iostream>
#include <string>
using namespace std;

class Rectangle {
public:
    Rectangle(double length, double width) : length(length), width(width) {}
    
    void setDimensions(double length, double width) {
        this->length = length;
        this->width = width;
    }
    
    double getArea() const {
        return length * width;
    }
    
    double getPerimeter() const {
        return 2 * (length + width);
    }
    
    void display() const {
        cout << "Rectangle(length=" << length << ", width=" << width << ")";
    }

    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    void output() const {
        cout << "Rectangle(length=" << length << ", width=" << width << ", Area=" << getArea() << ", Perimeter=" << getPerimeter() << ")" << endl;
    }

private:
    double length;
    double width;
};

class RectangleManager {
public:
    void addRectangle(const string& name, double length, double width) {
        rectangles[name] = Rectangle(length, width);
    }
    
    void updateRectangle(const string& name) {
        if (rectangles.find(name) != rectangles.end()) {
            cout << "Updating rectangle " << name << ":" << endl;
            rectangles[name].input();
        } else {
            cout << "Rectangle '" << name << "' not found." << endl;
        }
    }
    
    void calculateMetrics(const string& name) const {
        auto it = rectangles.find(name);
        if (it != rectangles.end()) {
            it->second.output();
        } else {
            cout << "Rectangle '" << name << "' not found." << endl;
        }
    }
    
    void displayAllRectangles() const {
        for (const auto& pair : rectangles) {
            cout << pair.first << ": ";
            pair.second.output();
        }
    }

private:
    unordered_map<string, Rectangle> rectangles;
};

int main() {
    RectangleManager manager;
    string name;
    double length, width;
    int choice;
    
    while (true) {
        cout << "\nMenu:\n1. Add Rectangle\n2. Update Rectangle\n3. Calculate Metrics\n4. Display All Rectangles\n5. Exit\nChoose an option: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter rectangle name: ";
                cin >> name;
                cout << "Enter length and width: ";
                cin >> length >> width;
                manager.addRectangle(name, length, width);
                break;
            case 2:
                cout << "Enter rectangle name: ";
                cin >> name;
                manager.updateRectangle(name);
                break;
            case 3:
                cout << "Enter rectangle name: ";
                cin >> name;
                manager.calculateMetrics(name);
                break;
            case 4:
                manager.displayAllRectangles();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid option. Try again." << endl;
        }
    }
}
