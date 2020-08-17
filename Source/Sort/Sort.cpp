#include "Sort.h"

void countingSort(vector<int>& input, int min, int max)
{
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
