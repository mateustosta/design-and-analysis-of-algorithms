#include <iostream>
#include <ctime>
#include <cmath>
#include <chrono>

using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int L = mid - left + 1;
    int R = right - mid;

    int leftArray[L];
    int rightArray[R];

    for (int i = 0;i < L;i++) {
        leftArray[i] = arr[left + i];
    }

    for (int i = 0;i < R;i++) {
        rightArray[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;

    while (i < L && j < R) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            i++;
        } else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < L) {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < R) {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = floor((left+right)/2);
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
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
    mergeSort(array, 0, 9);
    auto t2 = chrono::high_resolution_clock::now();
    auto duration = (chrono::duration_cast<chrono::microseconds>(t2 - t1).count());
    float time = (float)duration/1000000;

    for (int i = 0;i < 10;i++) {
        cout << "[" << i << "] = " << array[i] << endl;
    }

    cout << "Execution time = " << time << " seconds" << endl;

    return 0;
}