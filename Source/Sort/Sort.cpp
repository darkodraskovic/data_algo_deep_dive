#include "Sort.h"
#include <iostream>

template <typename T>
void printVector(vector<T>& input) {
    for (const T& elem : input) {
        std::cout << elem << ", ";
    }
    std::cout << "\n";
};
template void printVector(vector<int> &input);
template void printVector(vector<float> &input);

template <typename T>
void swap(vector<T>& input, int i, int j) {
    if (i == j) {
        return;
    }
    T tmp = input[i];
    input[i] = input[j];
    input[j] = tmp;
}

template <typename T>
void bubbleSort(vector<T>& input) {
    for (int unsortedIndex = input.size()-1; unsortedIndex > 0; unsortedIndex--) {
        for (int idx = 0; idx < unsortedIndex; idx++) {
            if (input[idx] > input[idx+1]) swap(input, idx, idx+1);
        }
    }
};
template void bubbleSort(vector<int>& input);
template void bubbleSort(vector<float>& input);

template <typename T>
void selectionSort(vector<T>& input) {
    for (int lastUnsortedIdx = input.size() - 1; lastUnsortedIdx > 0; lastUnsortedIdx--) {
        int largest = 0;
        for (int i = 1; i <= lastUnsortedIdx; i++) {
            if (input[i] > input[largest]) {
                largest = i;
            }
        }
        swap(input, largest, lastUnsortedIdx);
    }
};

template void selectionSort(vector<int>& input);
template void selectionSort(vector<float>& input);

void countingSort(vector<int>& input, int min, int max) {
    vector<int> countArray(max-min+1, 0);

    for(int i = 0; i < input.size(); i++) {
        countArray[input[i] - min]++;
    }

    int j = 0;
    for (int i = min; i <= max; i++) {
        while(countArray[i - min] > 0) {
            input[j++] = i;
            countArray[i - min]--;
        }
    }
}
