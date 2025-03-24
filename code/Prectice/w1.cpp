#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    stringstream ss;  // Create a stringstream object
    int num = 42;

    // Convert integer to string
    ss << num;         // Stream the integer into stringstream
    string str = ss.str();  // Extract the string from stringstream
    cout << "String: " << str << endl;  // Output: "String: 42"

    // Convert string to integer
    ss.clear();  // Clear any error flags
    ss.str("100"); // Assign new string to stringstream
    int newNum;
    ss >> newNum;  // Extract integer from stringstream
    cout << "Integer: " << newNum << endl;  // Output: "Integer: 100"

    return 0;
}
