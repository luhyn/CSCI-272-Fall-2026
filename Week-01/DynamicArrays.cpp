#include <iostream>

int* createDynamicArray(int size) {
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter element " << i << ": ";
        std::cin >> arr[i];
    }

    return arr;
}

void displayDynamicArray(int* arr, int size) {
    std::cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int* reallocateDynamicArray(int* oldArr, int oldSize, int newSize) {
    int* newArr = new int[newSize];

    // Copy the elements from the old array to the new array
    for (int i = 0; i < oldSize; i++) {
        newArr[i] = oldArr[i];
    }

    return newArr;
}
