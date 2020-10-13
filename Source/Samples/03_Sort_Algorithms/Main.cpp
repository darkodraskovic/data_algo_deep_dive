#include<iostream>
#include <vector>
#include "Sort/Sort.h"

using namespace std;

vector<float> floatArray = {20, 35, -15, 7, 55, 1, -22};
vector<int> intArray = {2, 5, 9, 8, 2, 8, 7, 10, 4, 3};

int main(int argc, char *argv[]){
    
    // bubbleSort(floatArray);
    // printVector(floatArray);
    
    selectionSort(floatArray);
    printVector(floatArray);

    // countingSort(intArray, 2, 10);
    // printVector(intArray);
    
    return 0;
}
