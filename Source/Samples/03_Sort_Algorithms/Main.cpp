#include<iostream>
#include <vector>
#include "Sort/Sort.h"

using namespace std;
 
int main(int argc, char *argv[]){
    cout << "Hello World!" << endl;

    vector<int> intArray = {2, 5, 9, 8, 2, 8, 7, 10, 4, 3};

    countingSort(intArray, 2, 10);

    for (int i = 0; i < intArray.size(); ++i)
    {
        cout << intArray[i] << "\n";
    }
    
    return 0;
}
