#include <iostream>
#include <fstream>
using namespace std;

class FileHandler {
    ofstream file;
public:
    FileHandler(const string& filename) {
        file.open(filename);
        if (file.is_open()) {
            cout << "File opened successfully" << endl;
        }
    }
    
    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            cout << "File closed" << endl;
        }
    }
    
    void write(const string& content) {
        if (file.is_open()) {
            file << content;
        }
    }
};

int main() {
    FileHandler fh("example.txt");
    fh.write("Hello, World!");
    return 0;
}  // Destructor closes file automatically