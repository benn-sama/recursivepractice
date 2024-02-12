#include <iostream>

// recursive function for linear search algrothim

int linearSearch(int *arr, int size, int value) {
    if (size == 0) {
        return -1;
    }

    if (arr[size - 1] == value) {
        return size -1;
    }

    return linearSearch(arr, size - 1, value); 
}

int main () {

}