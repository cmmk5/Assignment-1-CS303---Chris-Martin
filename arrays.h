
#ifndef ARRAYS_H
#define ARRAYS_H

#include <iostream>
#include <stdexcept>

using namespace std;

// Function that finds an int in the array to be changed
int findInt(int arr[], int size, int value);

// Function that modifies the findInt into another int
void modInt(int arr[], int index, int& oldValue, int newValue);

// Function that adds an int to the end of the array
void addInt(int arr[], int& size, int value);

// Function that removes an int from the array
void removeInt(int arr[], int& size, int index, bool remove);

#endif // ARRAYS_H
