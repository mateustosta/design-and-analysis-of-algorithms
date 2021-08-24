#include <iostream>
#include <vector>
#include <ctime>
#include <chrono>

void selectionSort(std::vector<int>& array) {
    for (int i = 0;i < array.size() - 1;i++) {
        int pivot = i;
        for (int j = i + 1;j < array.size();j++) {
            if (array[j] < array[pivot]) {
                pivot = j;
            }
        }
        if (array[i] != array[pivot]) {
            int temp = array[i];
            array[i] = array[pivot];
            array[pivot] = temp;
        }
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
    selectionSort(array);
    auto t2 = std::chrono::high_resolution_clock::now();
    auto duration = (std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count());
    float time = (float)duration/1000000;

    for (int i = 0;i < 50;i++) {
        std::cout << "[" << i << "] = " << array[i] << std::endl;
    }

    std::cout << "Execution time = " << time << " seconds" << std::endl;

    return 0;
}