#include <iostream>
#include "print_result.hpp"

using namespace std;

void printResult(int index, int target) {
    if (index != -1) {
        cout << "Value " << target << " found at index " << index << endl;
    } else {
        cout << "Value " << target << " not found in the array" << endl;
    }
}
