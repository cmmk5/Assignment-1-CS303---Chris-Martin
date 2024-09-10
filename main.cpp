
#include "arrays.h"
#include <fstream>

int main() {
    // Array setup
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size = 0;

    // Reads the data from the .txt file
    ifstream inputFile("A1input.txt"); // Adjust path as necessary
    if (!inputFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    while (inputFile >> arr[size] && size < MAX_SIZE) {
        size++;
    }
    inputFile.close();

    // Dispays the initally array from the .txt file
    cout << "Initial array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Finds an int in the array to be replaced
    int index = findInt(arr, size, 5);
    if (index != -1) {
        cout << endl;
        cout << "Element found at index: " << index << endl;
    }
    else {
        cout << "Element not found." << endl;
    }

    // Modifies the int that we initially found in the previous function
    try {
        int oldValue;
        modInt(arr, 2, oldValue, 10);
        cout << endl;
        cout << "Old value: " << oldValue << ", New value: " << arr[2] << endl;
    }
    catch (const out_of_range& e) {
        cout << e.what() << endl;
    }

    // Remove the int from this specific location in the array
    removeInt(arr, size, 3, true);

    // Adds an int to the end of the new array
    try {
        addInt(arr, size, 20);
        cout << endl;
        cout << "Added 20 to the array." << endl;
    }
    catch (const overflow_error& e) {
        cout << e.what() << endl;
    }

    // Displays the new array with the modifications
    cout << endl;
    cout << "Modified array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


