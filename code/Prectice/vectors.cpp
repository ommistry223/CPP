#include<iostream>
#include<vector>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> numbers;
    int num;
    // Read numbers from user until they enter -1
    cout << "Enter numbers (-1 to stop): ";
    while (true) {
        cin >> num;
        if (num == -1) {
            break; // Stop reading numbers when -1 is entered
        }
        numbers.push_back(num); // Add number to the vector
    }
    // Calculate the sum of all numbers in the vector
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i]; // Add each number to the sum
    }
    // Calculate the average
    double average = static_cast<double>(sum) / numbers.size(); // Cast to double for accurate division
    // Display the sum and average
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    // Find the maximum number in the vector
    int maxNum = numbers[0]; // Assume the first number is the maximum
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > maxNum) {
            maxNum = numbers[i]; // Update the maximum number if necessary
        }
    }
    // Display the maximum number
    cout << "Maximum: " << maxNum << endl;
    // Find the minimum number in the vector
    int minNum = numbers[0]; // Assume the first number is the minimum
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] < minNum) {
            minNum = numbers[i]; // Update the minimum number if necessary
        }
    }
    // Display the minimum number
    cout << "Minimum: " << minNum << endl;

    
    // Display the sorted vector
    cout << "Sorted numbers: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " "; // Print each number in the sorted vector
    }
    cout << endl;
    // Find the median of the vector
    int midIndex = numbers.size() / 2; // Calculate the middle index
    double median;
    if (numbers.size() % 2 == 0) { // If the vector has an even number of elements
        median = (numbers[midIndex - 1] + numbers[midIndex]) / 2.0; // Calculate the average of the two middle numbers
    } else {
        median = numbers[midIndex]; // If odd, take the middle number
    }
    // Display the median
    cout << "Median: " << median << endl;
    // Find the mode of the vector
    int mode = numbers[0]; // Assume the first number is the mode
    int maxCount = 0; // Initialize the maximum count
    for (int i = 1; i < numbers.size(); i++) {
        int count = 0; // Initialize the count for each number
        for (int j = 0; j < numbers.size(); j++) {
            if (numbers[i] == numbers[j]) {
                count++; // Increment the count if the number is found
            }
        }
        if (count > maxCount) {
            maxCount = count; // Update the maximum count if necessary
            mode = numbers[i]; // Update the mode if necessary
        }
    }
    // Display the mode
    cout << "Mode: " << mode << endl;
    // Find the range of the vector
    int range = maxNum - minNum; // Calculate the range
    // Display the range
    cout << "Range: " << range << endl;
    // Find the standard deviation of the vector

    return 0;
}