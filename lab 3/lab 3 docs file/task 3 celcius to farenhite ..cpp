// Name: WAQAR KHAN
// Roll No: 5120368 / 0720
// Lab 02 - Task 3

#include <iostream>   // Include input-output stream library
using namespace std;  // Use standard namespace to donot repeat std agin and again

int main() { // main programming part
    double celsius;   // Declare variable to store Celsius temperature
    cout << "Enter temperature in Celsius: ";  // Prompt user for input
    cin >> celsius;   // Read Celsius value from user

    double fahrenheit = (celsius * 9.0 / 5.0) + 32; // Convert Celsius to Fahrenheit using formula
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl; // Print result

    return 0;  // End program succesfully
}
