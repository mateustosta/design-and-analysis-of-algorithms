#include <iostream>
#include <ctime>
#include <cmath>
#include <chrono>

using namespace std;

int partition(int arr[], int left, int right) {
    int pivot = arr[left];
    int i = left - 1;
    int j = right + 1;

    while (true) {
        do {
            i++;
        } while (arr[i] < pivot);

        do {
            j--;
        } while (arr[j] > pivot);

        if (i >= j) {
            return j;
        }

        swap(arr[i], arr[j]);
    }

}

void quickSort(int arr[], int left, int right) {
    if (left < right) {
        int q = partition(arr, left, right);
        quickSort(arr, left, q);
        quickSort(arr, q+1, right);
    }
}

int main() {
    srand(time(NULL));
    int array[] = {1245,5,12,412,5123,623,6412,23,3412,52};

    for (int i = 0;i < 10;i++) {
        cout << "[" << i << "] = " << array[i] << endl;
    }

    cout << endl;

    auto t1 = chrono::high_resolution_clock::now();
    quickSort(array, 0, 9);
    auto t2 = chrono::high_resolution_clock::now();
    auto duration = (chrono::duration_cast<chrono::microseconds>(t2 - t1).count());
    float time = (float)duration/1000000;

    for (int i = 0;i < 10;i++) {
        cout << "[" << i << "] = " << array[i] << endl;
    }

    cout << "Execution time = " << time << " seconds" << endl;

    return 0;
}