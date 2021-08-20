#include <iostream>
#include <vector>
#include <ctime>
#include <chrono>

void insertionSort(std::vector<int>& array) {
    int pivot = NULL;
    for (int i = 1;i < array.size();i++) {
        pivot = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > pivot) {
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = pivot;
    }
}

int main() {
    srand(time(NULL));
    std::vector<int> array;

    for (int i = 0;i < 50;i++) {
        array.push_back(rand() % 1000 + 1);
    }

    for (int i = 0;i < 50;i++) {
        std::cout << "[" << i << "] = " << array[i] << std::endl;
    }

    std::cout << std::endl;

    auto t1 = std::chrono::high_resolution_clock::now();
    insertionSort(array);
    auto t2 = std::chrono::high_resolution_clock::now();
    auto duration = (std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count());
    float time = (float)duration/1000000;

    for (int i = 0;i < 50;i++) {
        std::cout << "[" << i << "] = " << array[i] << std::endl;
    }

    std::cout << "Execution time = " << time << " seconds" << std::endl;

    return 0;
}