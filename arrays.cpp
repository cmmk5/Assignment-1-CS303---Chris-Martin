
#include "arrays.h"

// Function that finds an int in the array
int findInt(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1; // Return -1 if int is not found
}

// Function that modifies the int we previously found from foundInt
void modInt(int arr[], int index, int& oldValue, int newValue) {
    if (index < 0 || index >= 100) {
        throw out_of_range("Index out of range.");
    }
    oldValue = arr[index];
    arr[index] = newValue;
}

// Function that adds an int to the end of the new array
void addInt(int arr[], int& size, int value) {
    if (size >= 100) {
        throw overflow_error("Array is full.");
    }
    arr[size++] = value;
}

// Function that removes an int from the original array, and modifies it for the new array
void removeInt(int arr[], int& size, int index, bool remove) {
    if (index < 0 || index >= size) {
        throw out_of_range("Index out of range.");
    }
    if (remove) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    else {
        arr[index] = 0;
    }
}
