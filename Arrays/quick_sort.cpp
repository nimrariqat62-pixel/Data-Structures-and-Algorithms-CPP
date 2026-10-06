#include <iostream>
using namespace std;

int partition(int numbers[], int low, int high) {
    int pivot = numbers[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (numbers[j] < pivot) {
            i++;

            int temp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp;
        }
    }

    int temp = numbers[i + 1];
    numbers[i + 1] = numbers[high];
    numbers[high] = temp;

    return i + 1;
}

void quickSort(int numbers[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(numbers, low, high);

        quickSort(numbers, low, pivotIndex - 1);
        quickSort(numbers, pivotIndex + 1, high);
    }
}

int main() {
    int numbers[] = {7, 8, 9, 10, 11};
    int size = 5;

    quickSort(numbers, 0, size - 1);

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}