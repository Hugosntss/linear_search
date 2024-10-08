#include <iostream>
#include "./utils/linear_search.cpp"
#include "./utils/print_result.cpp"

int main() {
    int arr[] = {10, 24, 36, 47, 59, 62, 73, 85, 92};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 47;

    int index = linearSearch(arr, size, target);

    printResult(index, target);

    return 0;
}
