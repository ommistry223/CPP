#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string input = "Hello World Example";
    stringstream ss(input);  // Initialize stringstream with input string
    string word;

    while (ss >> word) {  // Extract words one by one
        cout << word << endl;
    }

    return 0;
}
